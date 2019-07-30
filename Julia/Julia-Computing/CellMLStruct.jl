# Cell Model Structures Module

module CellMLStruct

export CellModel, CellComponent, CellVariable, VariableEquation, Equation,
ConditionalVariable, ConstVariable, NonConstVariable, StateVariable

# Define cell model Done in Importer
struct CellModel
    cell_model_name :: String
    components_count :: Int
    components_names :: Array{String}
end

# Define Cell Components Done in Importer
struct CellComponent
    components_name :: String
    variables_count :: Int
    variables_names :: Array{String}
end

# Dfine Cell Variables Done in Importer
struct CellVariable
    variable_name :: String
    component_name :: String
    is_constant :: Bool
    is_conditional :: Bool
    count_equations :: Int
    is_state :: Bool
end

# define a variable equation combining
struct VariableEquation
    has_bracket :: Bool
    variables :: Array{CellVariable}
    in_operations :: Array{String}
    front_operation :: Char
    power :: Int
end

# define the equation
struct Expression
    the_expression :: Expr
end

# deefine the condition variables
struct ConditionalVariable
    if_equations:: Array{Expression}
    if_return :: Expression
    else_return :: Expression
end
# Define Const Variables Done In Importer
struct ConstVariable
    variable :: CellVariable
    const_value :: Float64
end

# Define Non-Const Varaibles
struct NonConstVariable
    varaible :: CellVariable
    equations :: Array{Expression}
end

# Define a state valable
struct StateVariable
    variable :: CellVariable
    equation :: Expression
end

end
