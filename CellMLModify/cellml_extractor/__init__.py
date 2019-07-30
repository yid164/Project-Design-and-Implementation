import myokit.formats.cellml
import myokit
import mysql.connector
import myokit.units
import re

cellml_importer = myokit.formats.cellml.CellMLImporter()

components_list = []
variable_list = []
unit_list = []
equation_list = []


# Model
def get_model(path: str):
    model = cellml_importer.model(path)
    return model


# Component
def components_extractor(model: myokit.Model):
    i = 0
    components = model.components()
    component_iter = components.__iter__()
    component_size = model.count_components()
    while i < component_size:
        a_component = component_iter.__next__()
        if a_component not in components_list:
            components_list.append(a_component)
        i += 1


# variables
def variables_extractor(component: myokit.Component, model: myokit.Model):
    variable_size = component.count_variables()
    variables = component.variables()
    variable_iter = variables.__iter__()
    j = 0
    while j < variable_size:
        a_variable = variable_iter.__next__()
        variable_name = str(a_variable)
        for c in components_list:
            if variable_name.__contains__(c.uname() + '.'):
                variable_name = variable_name.replace(c.uname() + '.', "") + ',' + str(a_variable.unit())
                if variable_name not in variable_list:
                    variable_list.append(variable_name)
        if str(a_variable.unit()) not in unit_list:
            unit_list.append(str(a_variable.unit()))
        j += 1


# equations
def equations_extractor(component: myokit.Component):
    equations_size = component.count_equations()
    equations = myokit.EquationList(component.equations())
    equation_iter = equations.__iter__()
    print(equations.count_equations())

    z = 0
    while z < equations.count_equations():
        equation = equation_iter.__next__()
        x = re.sub("\[.*?\]", "", str(equation))
        print(x)

        z += 1
    
'''''''''''    
        equation_name = str(a_equation)
        for c in components_list:
            if equation_name.__contains__(c.uname()):
                equation_name = equation_name.replace(c.uname() + '.', "")
        for u in unit_list:
            if equation_name.__contains__(u):
                equation_name = equation_name.replace(u, "")
        if equation_name not in equation_list:
            equation_list.append(equation_name)
'''''''''''


# main
def let_try(path: str):
    a_model = get_model(path)
    components_extractor(model=a_model)
    for c in components_list:
        equations_extractor(c)


# let_try("../cell_models/fitzhugh_1961.cellml")
let_try("../cell_models/luo_rudy_1991.cellml")
