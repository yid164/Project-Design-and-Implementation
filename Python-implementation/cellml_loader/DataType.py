

# Component Data Define
class Component:
    def __int__(self, component_name):
        self.component_name = component_name

    def __eq__(self, other):
        return self.component_name == other

    def __str__(self):
        return self.component_name

class Variable:
    def __init__(self, var_component:Component, name:str, is_constant:bool, value:str):
        self.var_component = var_component
        self.name = name
        self.is_constant = is_constant
        self.value = value

    def __eq__(self, other):
        return self.name == other.name &\
            self.var_component == other.var_component &\
            self.is_constant == other.is_constant &\
            self.value == other.value

    def __str__(self):
        return 'Component: ' + str(self.var_component) + '\n' + 'State Name: \n' + str(self.name) + '\n' + ' = ' + \
               str(self.value)
# LHS data define
class LHS:
    def __init__(self, value):
        self.value = value

    def __eq__(self, other):
        return self.value == other.value

    def __str__(self):
        return self.value


# RHS data define
class RHS:
    def __init__(self, value):
        self.value = value

    def __eq__(self, other):
        return self.value == other.value

    def __str__(self):
        return self.value


class Expression:
    def __init__(self, lhs: LHS, rhs: RHS):
        self.lhs = lhs
        self.rhs = rhs

    def __eq__(self, other):
        return self.lhs == other.self.lhs & self.rhs == other.rhs

    def __str__(self):
        return str(self.lhs) + ' = ' + str(self.rhs)

# State Data Define
class States:
    def __init__(self, component:Component, state_name:str, state_lhs=LHS, state_rhs=RHS):
        self.component = component
        self.state_name = state_name
        self.state_lhs = state_lhs
        self.state_rhs = state_rhs

    def __eq__(self, other):
        return self.component == other.component & self.state_name == other.state_name & self.state_lhs \
               == other.state_lhs == self.state_rhs == other.state_rhs
