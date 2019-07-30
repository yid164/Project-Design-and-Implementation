import myokit.formats.cellml
import myokit
import myokit.formats.opencl
import myokit.formats.python


path = "./cell_models/luo_rudy_1991.cellml"
path1 = "./cell_models/fitzhugh_1961.cellml"
path2 = "/Users/yinshengdong/Downloads/beeler_reuter_1977-13d61afa9397/beeler_reuter_1977.cellml"
cellml_importer = myokit.formats.cellml.CellMLImporter(verbose=True)

python_exporter = myokit.formats.python.PythonExporter()

opencl_exporter = myokit.formats.python.exporters()


cellml_model = cellml_importer.model(path=path2).clone()




components = cellml_model.components()


components_iter = components.__iter__()

i = 0

components_size = cellml_model.count_components()
while i < components_size:
    a_component = components_iter.__next__()
    print(a_component)
    i += 1

print("\n\n\n")

states = cellml_model.states()
states_iter = states.__iter__()

i = 0


states_size = cellml_model.count_states()
print(cellml_model.count_states())

while i < states_size:
    a_state = states_iter.__next__()
    print(a_state)
    i += 1

print("\n\n\n")

variables_size = cellml_model.count_variables()
variables = cellml_model.variables()
variables_iter = variables.__iter__()
print(variables_size)
i = 0

while i < variables_size:
    a_variable = variables_iter.__next__()
    if a_variable.is_constant():
        print('constant: ' + str(a_variable) + ' = ' + str(a_variable.value()))

    else:
        print('non-constant: '+ str(a_variable) + ' = ' + str(a_variable.rhs()))
        a_variable.ini

    i += 1




















