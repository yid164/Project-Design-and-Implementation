module CellMLImporter

    include("CellMLStruct.jl")
    using Pkg
    using PyCall

    ENV["PYTHON"] = "/usr/bin/python3"
    Pkg.build("PyCall")

    @pyimport myokit.formats.cellml as cellml

    cellml_importer = cellml.CellMLImporter()



    path = "./cellmls/luo_rudy_1991.cellml"

    # Get the CellML Models
    function CellModel(path)
        cell_model = cellml_importer.model(path)
        cellml_model_name = cell_model.name()
        components_names = []
        count_components = cell_model.count_components()
        components = cell_model.components()
        components_iter = components.__iter__()
        for i in 1:count_components
            a_component = components_iter.__next__()
            push!(components_names, a_component.name())
        end
        return CellMLStruct.CellModel(cellml_model_name, count_components, components_names)

    end

    # Get the CellML Components
    function CellComponents(path)
        cell_model = cellml_importer.model(path)
        cellml_model_name = cell_model.name()
        count_components = cell_model.count_components()
        components = cell_model.components()
        component_list = []
        components_iter = components.__iter__()
        for i in 1:count_components
            a_component = components_iter.__next__()
            count_variables = a_component.count_variables()
            variables = a_component.variables()
            variable_iter = variables.__iter__()
            variable_list = []
            for j in 1: count_variables
                a_variable = variable_iter.__next__()
                push!(variable_list, a_variable.name())
            end
            push!(component_list, CellMLStruct.CellComponent(a_component.name(), count_variables, variable_list))
        end
        return component_list
    end

    # Get All Variables from the Cellml Model
    function CellVariables(path)
        cell_model = cellml_importer.model(path).clone()
        cellml_model_name = cell_model.name()

        components = cell_model.components()
        components_iter = components.__iter__()
        count_components = cell_model.count_components()
        variable_list = []
        for s in 1 : count_components
            a_component = components_iter.__next__()
            component_name = a_component.name()
            count_variables = a_component.count_variables()
            variables = a_component.variables()
            variables_iter = variables.__iter__()
            for i in 1 : count_variables
                a_variable = variables_iter.__next__()
                variable_name = a_variable.name()
                count_equations = a_variable.count_equations()
                is_constant = a_variable.is_constant()
                is_conditional = false
                is_state = a_variable.is_state()
                rhs = string(a_variable.rhs().__str__())
                #string(rhs)
                if length(rhs) >= 9
                    if SubString(rhs, 1, 9) =="piecewise"
                        is_conditional = true
                    end
                end
                this_variable = CellMLStruct.CellVariable(variable_name,
                component_name, is_constant, is_conditional, count_equations, is_state)
                push!(variable_list, this_variable)
            end
        end
        return variable_list
    end

    #Get All Const Variables
    function CellConstVariables(path)
        cell_model = cellml_importer.model(path).clone()
        cellml_model_name = cell_model.name()

        components = cell_model.components()
        components_iter = components.__iter__()
        count_components = cell_model.count_components()
        variable_list = []
        for s in 1 : count_components
            a_component = components_iter.__next__()
            component_name = a_component.name()
            count_variables = a_component.count_variables()
            variables = a_component.variables()
            variables_iter = variables.__iter__()
            for i in 1 : count_variables
                a_variable = variables_iter.__next__()
                variable_name = a_variable.name()
                count_equations = a_variable.count_equations()
                is_constant = Bool(a_variable.is_constant())
                is_conditional = false
                is_state = a_variable.is_state()
                rhs = string(a_variable.rhs().__str__())
                #string(rhs)
                if length(rhs) >= 9
                    if SubString(rhs, 1, 9) =="piecewise"
                        is_conditional = true
                    end
                end
                if is_constant

                    this_variable = CellMLStruct.CellVariable(variable_name,
                    component_name, is_constant, is_conditional, count_equations, is_state)

                    the_value = Float64(a_variable.value())

                    # println(the_value)
                    this_const_variable = CellMLStruct.ConstVariable(this_variable, the_value)
                    push!(variable_list, this_const_variable)
                end

            end
        end
        return variable_list
    end

    function CellStateVariables(path)
        cell_model = cellml_importer.model(path).clone()
        cellml_model_name = cell_model.name()
        all_variables = CellVariables(path)
        components = cell_model.components()
        components_iter = components.__iter__()
        count_components = cell_model.count_components()
        variable_list = []
        for s in 1 : count_components
            a_component = components_iter.__next__()
            component_name = a_component.name()
            count_variables = a_component.count_variables()
            variables = a_component.variables()
            variables_iter = variables.__iter__()
            for i in 1 : count_variables
                a_variable = variables_iter.__next__()
                variable_name = a_variable.name()
                count_equations = a_variable.count_equations()
                is_constant = Bool(a_variable.is_constant())
                is_conditional = false
                is_state = Bool(a_variable.is_state())
                rhs = string(a_variable.rhs().__str__())
                #string(rhs)
                if length(rhs) >= 9
                    if SubString(rhs, 1, 9) =="piecewise"
                        is_conditional = true
                    end
                end
                if is_state
                    post_expression = String(a_variable.rhs().__str__())
                    the_expression = String(a_variable.name() * " = "  * a_variable.rhs().__str__())
                    println(the_expression)

                end

            end
        end
    end


    # println(CellModel(path))
    CellStateVariables(path)
end
