#!/usr/bin/env python
#
# Generated on 2019-03-20 16:26:57
#
import math

#
# Components and variables
#

class CBackground_current(object):
    def __init__(self):
        self.E_b = None
        self.g_b = None
        self.i_b = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
        self.E_b = (-59.87)
        self.g_b = 0.03921
    def init(self):
        """
        Resets the state variables to their initial values
        """
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.i_b = self.g_b * (c_membrane.V - self.E_b)

class CEnvironment(object):
    def __init__(self):
        self.time = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
    def init(self):
        """
        Resets the state variables to their initial values
        """
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        c_environment.time = engine.time

class CFast_sodium_current_h_gate(object):
    def __init__(self):
        self.alpha_h = None
        self.beta_h = None
        self.h = None
        self.d_h = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
    def init(self):
        """
        Resets the state variables to their initial values
        """
        self.h =  9.82660523699655952e-01
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.alpha_h = (0.135 * math.exp((80.0 + c_membrane.V) / (-6.8)) if (c_membrane.V < (-40.0)) else 0.0)
        self.beta_h = (3.56 * math.exp(0.079 * c_membrane.V) + 310000.0 * math.exp(0.35 * c_membrane.V) if (c_membrane.V < (-40.0)) else 1.0 / (0.13 * (1.0 + math.exp((c_membrane.V + 10.66) / (-11.1)))))
        self.d_h = self.alpha_h * (1.0 - self.h) - self.beta_h * self.h

class CFast_sodium_current_j_gate(object):
    def __init__(self):
        self.alpha_j = None
        self.beta_j = None
        self.j = None
        self.d_j = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
    def init(self):
        """
        Resets the state variables to their initial values
        """
        self.j =  9.89108212766685035e-01
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.alpha_j = (((-127140.0) * math.exp(0.2444 * c_membrane.V) - 3.474e-05 * math.exp((-0.04391) * c_membrane.V)) * (c_membrane.V + 37.78) / (1.0 + math.exp(0.311 * (c_membrane.V + 79.23))) if (c_membrane.V < (-40.0)) else 0.0)
        self.beta_j = (0.1212 * math.exp((-0.01052) * c_membrane.V) / (1.0 + math.exp((-0.1378) * (c_membrane.V + 40.14))) if (c_membrane.V < (-40.0)) else 0.3 * math.exp((-2.535e-07) * c_membrane.V) / (1.0 + math.exp((-0.1) * (c_membrane.V + 32.0))))
        self.d_j = self.alpha_j * (1.0 - self.j) - self.beta_j * self.j

class CFast_sodium_current_m_gate(object):
    def __init__(self):
        self.alpha_m = None
        self.beta_m = None
        self.m = None
        self.d_m = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
    def init(self):
        """
        Resets the state variables to their initial values
        """
        self.m =  1.71338077730188000e-03
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.alpha_m = 0.32 * (c_membrane.V + 47.13) / (1.0 - math.exp((-0.1) * (c_membrane.V + 47.13)))
        self.beta_m = 0.08 * math.exp((-c_membrane.V) / 11.0)
        self.d_m = self.alpha_m * (1.0 - self.m) - self.beta_m * self.m

class CIonic_concentrations(object):
    def __init__(self):
        self.Ki = None
        self.Ko = None
        self.Nai = None
        self.Nao = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
        self.Ki = 145.0
        self.Ko = 5.4
        self.Nai = 18.0
        self.Nao = 140.0
    def init(self):
        """
        Resets the state variables to their initial values
        """
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        pass

class CSlow_inward_current(object):
    def __init__(self):
        self.E_si = None
        self.i_si = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
    def init(self):
        """
        Resets the state variables to their initial values
        """
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.E_si = 7.7 - 13.0287 * math.log(c_intracellular_calcium_concentration.Cai / 1.0)
        self.i_si = 0.09 * c_slow_inward_current_d_gate.d * c_slow_inward_current_f_gate.f * (c_membrane.V - self.E_si)

class CSlow_inward_current_d_gate(object):
    def __init__(self):
        self.alpha_d = None
        self.beta_d = None
        self.d = None
        self.d_d = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
    def init(self):
        """
        Resets the state variables to their initial values
        """
        self.d =  3.02126301779860997e-03
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.alpha_d = 0.095 * math.exp((-0.01) * (c_membrane.V - 5.0)) / (1.0 + math.exp((-0.072) * (c_membrane.V - 5.0)))
        self.beta_d = 0.07 * math.exp((-0.017) * (c_membrane.V + 44.0)) / (1.0 + math.exp(0.05 * (c_membrane.V + 44.0)))
        self.d_d = self.alpha_d * (1.0 - self.d) - self.beta_d * self.d

class CSlow_inward_current_f_gate(object):
    def __init__(self):
        self.alpha_f = None
        self.beta_f = None
        self.f = None
        self.d_f = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
    def init(self):
        """
        Resets the state variables to their initial values
        """
        self.f =  9.99967936476324981e-01
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.alpha_f = 0.012 * math.exp((-0.008) * (c_membrane.V + 28.0)) / (1.0 + math.exp(0.15 * (c_membrane.V + 28.0)))
        self.beta_f = 0.0065 * math.exp((-0.02) * (c_membrane.V + 30.0)) / (1.0 + math.exp((-0.2) * (c_membrane.V + 30.0)))
        self.d_f = self.alpha_f * (1.0 - self.f) - self.beta_f * self.f

class CTime_dependent_potassium_current_x_gate(object):
    def __init__(self):
        self.X = None
        self.d_x = None
        self.alpha_X = None
        self.beta_X = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
    def init(self):
        """
        Resets the state variables to their initial values
        """
        self.X =  4.17603108167287004e-02
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.alpha_X = 0.0005 * math.exp(0.083 * (c_membrane.V + 50.0)) / (1.0 + math.exp(0.057 * (c_membrane.V + 50.0)))
        self.beta_X = 0.0013 * math.exp((-0.06) * (c_membrane.V + 20.0)) / (1.0 + math.exp((-0.04) * (c_membrane.V + 20.0)))
        self.d_x = self.alpha_X * (1.0 - self.X) - self.beta_X * self.X

class CTime_dependent_potassium_current_xi_gate(object):
    def __init__(self):
        self.Xi = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
    def init(self):
        """
        Resets the state variables to their initial values
        """
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.Xi = (2.837 * (math.exp(0.04 * (c_membrane.V + 77.0)) - 1.0) / ((c_membrane.V + 77.0) * math.exp(0.04 * (c_membrane.V + 35.0))) if (c_membrane.V > (-100.0)) else 1.0)

class CIntracellular_calcium_concentration(object):
    def __init__(self):
        self.Cai = None
        self.d_cai = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
    def init(self):
        """
        Resets the state variables to their initial values
        """
        self.Cai =  1.79488163883060009e-04
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.d_cai = (-0.0001) / 1.0 * c_slow_inward_current.i_si + 0.07 * (0.0001 - self.Cai)

class CFast_sodium_current(object):
    def __init__(self):
        self.E_Na = None
        self.g_Na = None
        self.i_Na = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
        self.g_Na = 23.0
    def init(self):
        """
        Resets the state variables to their initial values
        """
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        pass

class CMembrane(object):
    def __init__(self):
        self.C = None
        self.F = None
        self.I_stim = None
        self.R = None
        self.T = None
        self.V = None
        self.d_v = None
        self.stim_amplitude = None
        self.stim_duration = None
        self.stim_end = None
        self.stim_period = None
        self.stim_start = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
        self.C = 1.0
        self.F = 96484.6
        self.R = 8314.0
        self.T = 310.0
        self.stim_amplitude = (-25.5)
        self.stim_duration = 2.0
        self.stim_end = 9000.0
        self.stim_period = 1000.0
        self.stim_start = 100.0
    def init(self):
        """
        Resets the state variables to their initial values
        """
        self.V = -8.43801107370999972e+01
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.I_stim = (self.stim_amplitude if (((c_environment.time >= self.stim_start) and (c_environment.time <= self.stim_end)) and (c_environment.time - self.stim_start - math.floor((c_environment.time - self.stim_start) / self.stim_period) * self.stim_period <= self.stim_duration)) else 0.0)

class CPlateau_potassium_current(object):
    def __init__(self):
        self.E_Kp = None
        self.Kp = None
        self.g_Kp = None
        self.i_Kp = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
        self.g_Kp = 0.0183
    def init(self):
        """
        Resets the state variables to their initial values
        """
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.Kp = 1.0 / (1.0 + math.exp((7.488 - c_membrane.V) / 5.98))

class CTime_dependent_potassium_current(object):
    def __init__(self):
        self.E_K = None
        self.PR_NaK = None
        self.g_K = None
        self.i_K = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
        self.PR_NaK = 0.01833
        self.g_K = 0.282 * math.sqrt(c_ionic_concentrations.Ko / 5.4)
        self.E_K = c_membrane.R * c_membrane.T / c_membrane.F * math.log((c_ionic_concentrations.Ko + self.PR_NaK * c_ionic_concentrations.Nao) / (c_ionic_concentrations.Ki + self.PR_NaK * c_ionic_concentrations.Nai))
    def init(self):
        """
        Resets the state variables to their initial values
        """
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.i_K = self.g_K * c_time_dependent_potassium_current_x_gate.X * c_time_dependent_potassium_current_xi_gate.Xi * (c_membrane.V - self.E_K)

class CTime_independent_potassium_current(object):
    def __init__(self):
        self.E_K1 = None
        self.g_K1 = None
        self.i_K1 = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
        self.E_K1 = c_membrane.R * c_membrane.T / c_membrane.F * math.log(c_ionic_concentrations.Ko / c_ionic_concentrations.Ki)
        self.g_K1 = 0.6047 * math.sqrt(c_ionic_concentrations.Ko / 5.4)
    def init(self):
        """
        Resets the state variables to their initial values
        """
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        pass

class CTime_independent_potassium_current_k1_gate(object):
    def __init__(self):
        self.K1_infinity = None
        self.alpha_K1 = None
        self.beta_K1 = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
    def init(self):
        """
        Resets the state variables to their initial values
        """
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        self.alpha_K1 = 1.02 / (1.0 + math.exp(0.2385 * (c_membrane.V - c_time_independent_potassium_current.E_K1 - 59.215)))
        self.beta_K1 = (0.49124 * math.exp(0.08032 * (c_membrane.V + 5.476 - c_time_independent_potassium_current.E_K1)) + 1.0 * math.exp(0.06175 * (c_membrane.V - (c_time_independent_potassium_current.E_K1 + 594.31)))) / (1.0 + math.exp((-0.5143) * (c_membrane.V - c_time_independent_potassium_current.E_K1 + 4.753)))
        self.K1_infinity = self.alpha_K1 / (self.alpha_K1 + self.beta_K1)

#
# Engine component
#
class Engine(object):
    """
    Calculates the derivatives in the current state
    """
    def __init__(self):
        self.pace = 0.0
        self.time = 0.0
        self.CT1 = CTime_independent_potassium_current_k1_gate()
    def update(self):
        c_background_current.update()
        c_environment.update()
        c_fast_sodium_current_h_gate.update()
        c_fast_sodium_current_j_gate.update()
        c_fast_sodium_current_m_gate.update()
        c_ionic_concentrations.update()
        c_slow_inward_current.update()
        c_slow_inward_current_d_gate.update()
        c_slow_inward_current_f_gate.update()
        c_time_dependent_potassium_current_x_gate.update()
        c_time_dependent_potassium_current_xi_gate.update()
        c_intracellular_calcium_concentration.update()
        c_fast_sodium_current.update()
        c_membrane.update()
        c_plateau_potassium_current.update()
        c_time_dependent_potassium_current.update()
        c_time_independent_potassium_current.update()
        c_time_independent_potassium_current_k1_gate.update()
        # Remaining equations
        self.CT1.update()
        c_time_independent_potassium_current.i_K1 = c_time_independent_potassium_current.g_K1 * self.CT1.K1_infinity * (c_membrane.V - c_time_independent_potassium_current.E_K1)
        c_fast_sodium_current.i_Na = c_fast_sodium_current.g_Na * c_fast_sodium_current_m_gate.m ** 3.0 * c_fast_sodium_current_h_gate.h * c_fast_sodium_current_j_gate.j * (c_membrane.V - c_fast_sodium_current.E_Na)
        c_plateau_potassium_current.i_Kp = c_plateau_potassium_current.g_Kp * c_plateau_potassium_current.Kp * (c_membrane.V - c_plateau_potassium_current.E_Kp)
        c_membrane.d_v = (-1.0) / c_membrane.C * (c_membrane.I_stim + c_fast_sodium_current.i_Na + c_slow_inward_current.i_si + c_time_dependent_potassium_current.i_K + c_time_independent_potassium_current.i_K1 + c_plateau_potassium_current.i_Kp + c_background_current.i_b)
        print(c_membrane.V)

#
# Create objects, set initial values
#
def init():
    """ (Re-)Initializes the model """
    global c_background_current
    global c_environment
    global c_fast_sodium_current_h_gate
    global c_fast_sodium_current_j_gate
    global c_fast_sodium_current_m_gate
    global c_ionic_concentrations
    global c_slow_inward_current
    global c_slow_inward_current_d_gate
    global c_slow_inward_current_f_gate
    global c_time_dependent_potassium_current_x_gate
    global c_time_dependent_potassium_current_xi_gate
    global c_intracellular_calcium_concentration
    global c_fast_sodium_current
    global c_membrane
    global c_plateau_potassium_current
    global c_time_dependent_potassium_current
    global c_time_independent_potassium_current
    global c_time_independent_potassium_current_k1_gate
    global engine
    c_background_current                         = CBackground_current()
    c_environment                                = CEnvironment()
    c_fast_sodium_current_h_gate                 = CFast_sodium_current_h_gate()
    c_fast_sodium_current_j_gate                 = CFast_sodium_current_j_gate()
    c_fast_sodium_current_m_gate                 = CFast_sodium_current_m_gate()
    c_ionic_concentrations                       = CIonic_concentrations()
    c_slow_inward_current                        = CSlow_inward_current()
    c_slow_inward_current_d_gate                 = CSlow_inward_current_d_gate()
    c_slow_inward_current_f_gate                 = CSlow_inward_current_f_gate()
    c_time_dependent_potassium_current_x_gate    = CTime_dependent_potassium_current_x_gate()
    c_time_dependent_potassium_current_xi_gate   = CTime_dependent_potassium_current_xi_gate()
    c_intracellular_calcium_concentration        = CIntracellular_calcium_concentration()
    c_fast_sodium_current                        = CFast_sodium_current()
    c_membrane                                   = CMembrane()
    c_plateau_potassium_current                  = CPlateau_potassium_current()
    c_time_dependent_potassium_current           = CTime_dependent_potassium_current()
    c_time_independent_potassium_current         = CTime_independent_potassium_current()
    c_time_independent_potassium_current_k1_gate = CTime_independent_potassium_current_k1_gate()
    engine = Engine()
    c_fast_sodium_current.E_Na = c_membrane.R * c_membrane.T / c_membrane.F * math.log(c_ionic_concentrations.Nao / c_ionic_concentrations.Nai)
    c_plateau_potassium_current.E_Kp = c_time_independent_potassium_current.E_K1

#
# Update function (rhs function, takes a single step)
#
def update(stepSize):
    """ Calculates all derivatives, update state, advances time """
    engine.update()
    c_membrane.V                                += stepSize * c_membrane.d_v
    c_fast_sodium_current_m_gate.m              += stepSize * c_fast_sodium_current_m_gate.d_m
    c_fast_sodium_current_h_gate.h              += stepSize * c_fast_sodium_current_h_gate.d_h
    c_fast_sodium_current_j_gate.j              += stepSize * c_fast_sodium_current_j_gate.d_j
    c_slow_inward_current_d_gate.d              += stepSize * c_slow_inward_current_d_gate.d_d
    c_slow_inward_current_f_gate.f              += stepSize * c_slow_inward_current_f_gate.d_f
    c_time_dependent_potassium_current_x_gate.X += stepSize * c_time_dependent_potassium_current_x_gate.d_x
    c_intracellular_calcium_concentration.Cai   += stepSize * c_intracellular_calcium_concentration.d_cai

#
# State vector returning function
#
def state():
    """ Returns the state vector """
    return [c_membrane.V,
        c_fast_sodium_current_m_gate.m,
        c_fast_sodium_current_h_gate.h,
        c_fast_sodium_current_j_gate.j,
        c_slow_inward_current_d_gate.d,
        c_slow_inward_current_f_gate.f,
        c_time_dependent_potassium_current_x_gate.X,
        c_intracellular_calcium_concentration.Cai]

#
# State vector printing function
#
def print_state():
    """ Prints the current state to the screen """

    f = "{:<41}  {:<20}  {:<20}"
    print("-"*80)
    print(f.format("Name", "State value", "Derivative"))
    f = "{: <41}  {:< 20.13e}  {:< 20.13e}"
    print(f.format("membrane.V", c_membrane.V, c_membrane.d_v))
    print(f.format("fast_sodium_current_m_gate.m", c_fast_sodium_current_m_gate.m, c_fast_sodium_current_m_gate.d_m))
    print(f.format("fast_sodium_current_h_gate.h", c_fast_sodium_current_h_gate.h, c_fast_sodium_current_h_gate.d_h))
    print(f.format("fast_sodium_current_j_gate.j", c_fast_sodium_current_j_gate.j, c_fast_sodium_current_j_gate.d_j))
    print(f.format("slow_inward_current_d_gate.d", c_slow_inward_current_d_gate.d, c_slow_inward_current_d_gate.d_d))
    print(f.format("slow_inward_current_f_gate.f", c_slow_inward_current_f_gate.f, c_slow_inward_current_f_gate.d_f))
    print(f.format("time_dependent_potassium_current_X_gate.X", c_time_dependent_potassium_current_x_gate.X, c_time_dependent_potassium_current_x_gate.d_x))
    print(f.format("intracellular_calcium_concentration.Cai", c_intracellular_calcium_concentration.Cai, c_intracellular_calcium_concentration.d_cai))

#
# Test step function
#
def test_step():
    """ Calculates and prints the initial derivatives """
    init()
    engine.update()
    print_state()

#
# Pacing
#
class Protocol(object):
    """ Holds an ordered set of ProtocolEvent objects """
    def __init__(self):
        super(Protocol, self).__init__()
        self.head = None
    def add(self, e):
        """ Schedules an event """
        if self.head is None:
            self.head = e
            return
        if e.start < self.head.start:
            e.next = self.head
            self.head = e
            return
        f = self.head
        while (f.next is not None) and (e.start > f.next.start):
            f = f.next
        e.next = f.next
        f.next = e
    def pop(self):
        """ Returns the next event """
        e = self.head
        if self.head is not None:
            self.head = self.head.next
        return e
class ProtocolEvent(object):
    def __init__(self, level, start, duration, period=0, multiplier=0):
        super(ProtocolEvent, self).__init__()
        self.level = float(level)
        self.start = float(start)
        self.duration = float(duration)
        if self.duration <= 0:
            raise Exception('Duration must be greater than zero')
        self.period = float(period)
        if self.period < 0:
            raise Exception('multiplier must be zero or greater')
        self.multiplier = int(multiplier)
        if self.multiplier < 0:
            raise Exception('Multiplier must be zero or greater')
        if self.period == 0 and self.multiplier > 0:
            raise Exception('Non-periodic event cannot occur more than once')
        self.next = None

def pacing_protocol():
    pacing = Protocol()
    pacing.add(ProtocolEvent(1.0, 100.0, 0.5, 1000.0, 0))
    return pacing

#
# Solver
#
def beat(stepSmall = 0.005, stepLarge = 0.01):
    """
    Simulates a single beat
    """
    tmin = 0
    tmax = 1000
    # Feedback
    outInt = int(math.ceil(tmax / 10.0))
    outPos = engine.time
    outVal = 0
    # Logging
    logInt = 1
    logPos = engine.time
    log = []
    # Stepsize
    stepSize = stepSmall
    hadPulse = False
    vInit = c_membrane.V
    # Pacing
    pacing = pacing_protocol()
    next = pacing.head
    while next and next.start < tmin:
        next = next.next
    if next.start < tmin:
        next = None
    fire = None
    fireDown = 0
    stopTime = min(next.start, tmin + stepSize)
    print('Starting integration with step sizes ' + str(stepSmall) + ' and ' + str(stepLarge) + '.')
    while engine.time < tmax:
        update(stopTime - engine.time)
        engine.time = stopTime
        # Event over
        if (fire and engine.time >= fireDown):
            engine.pace = 0
            fire = None
        # New event
        if (next and engine.time >= next.start):
            fire = next
            next = next.next
            engine.pace = fire.level
            fireDown = fire.start + fire.duration
            if fire.period > 0:
                if fire.multiplier == 1:
                    fire.period = 0
                else:
                    if fire.multiplier > 1:
                        fire.multiplier -=1
                    fire.start += fire.period
                    pacing.add(fire)
                    next = pacing.head
        # User feedback
        if engine.time >= outPos and outVal < 100:
            print(str(outVal) + "%")
            outVal += 10
            outPos += outInt
        # Logging
        if engine.time >= logPos:
            log.append((engine.time, state()))
            logPos += logInt
        # Step size update
        if fire: # or c_membrane.V > -70:
            if stepSize != stepSmall:
                print("Small steps")
                stepSize = stepSmall
        else:
            if stepSize != stepLarge:
                print("Big steps")
                stepSize = stepLarge
        # Set next time
        stopTime = engine.time + stepSize
        if fire and fireDown < stopTime:
            stopTime = fireDown
        if next and next.start < stopTime:
            stopTime = next.start
        if logPos < stopTime:
            stopTime = logPos
    print("100% done")
    print("t = " + str(engine.time))
    print_state()
    return log

#
# Run if loaded as main script
#
if __name__ == '__main__':
    small = 0.005
    large = 0.01
    go = True
    done = False
    while go:
        go = False
        try:
            init()
            data = beat(small, large)
            done = True
        except ArithmeticError as e:
            print('Arithmetic error occurred')
            y = 'Continue with smaller stepsize? (y/n): '
            try:
                y = raw_input(y)    # Python 2
            except NameError:
                y = input(y)        # Python 3
            if y.lower()[0:1] == 'y':
                small /= 2
                large /= 2
                go = True
    if done:
        print('Showing result...')
        x = []
        y = []
        for time, state in data:
            x.append(time)
            y.append(state[0])
        import matplotlib.pyplot as py
        plot = py.plot(x, y)
        py.show()
