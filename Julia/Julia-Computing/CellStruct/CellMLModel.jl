# Cell Model Structures Module

module CellMLStruct

# Define cell model
struct CellModel
    cell_model_name :: String
    components_count :: Int
    components_names :: Array{String}
end

# Define Cell Components
struct CellComponent
    components_name :: String
    variables_count :: Int
    variables_names :: Array{String}
end

# Dfine Cell Variables
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
struct Equation
    lhs_varaible :: CellVariable
    rhs_variables :: Array{CellVariable}
end

# deefine the condition variables
struct ConditionalVariable
    if_equations:: Array{Equation}
    if_return :: Equation
    else_return :: Equation

# Define Const Variables
struct ConstVariable
    variable :: CellVariable
    const_value :: Float64
end

# Define Non-Const Varaibles
struct NonConstVariable
    varaible :: CellVariable
    equations :: Array{Equation}
end

# Define a state valable
struct StateVariable
    variable :: CellVariable
    equation :: Equation
end

end
