#!/usr/bin/env python
#
# Generated on 2019-03-20 16:14:47
#
import math

#
# Components and variables
#

class CMain(object):
    def __init__(self):
        self.I = None
        self.alpha = None
        self.epsilon = None
        self.gamma = None
        self.t = None
        self.v = None
        self.d_v = None
        self.w = None
        self.d_w = None

        self._constants()
        self.init()
    def _constants(self):
        """
        Sets the constant values
        """
        self.alpha = (-0.08)
        self.epsilon = 0.005
        self.gamma = 3.0
    def init(self):
        """
        Resets the state variables to their initial values
        """
        self.v = 0.0
        self.w = 0.0
    def update(self):
        """
        Re-calculates all values for the current time and state
        """
        c_main.t = engine.time
        self.I = ((-80.0) if ((self.t >= 0.0) and (self.t <= 0.5)) else 0.0)
        self.d_w = 1.0 * self.epsilon * (self.v - self.gamma * self.w)
        self.d_v = 1.0 * (self.v * (self.v - self.alpha) * (1.0 - self.v) - self.w + self.I)
        print(self.v)

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
    def update(self):
        c_main.update()
        # Remaining equations

#
# Create objects, set initial values
#
def init():
    """ (Re-)Initializes the model """
    global c_main
    global engine
    c_main = CMain()
    engine = Engine()

#
# Update function (rhs function, takes a single step)
#
def update(stepSize):
    """ Calculates all derivatives, update state, advances time """
    engine.update()
    c_main.v += stepSize * c_main.d_v
    c_main.w += stepSize * c_main.d_w

#
# State vector returning function
#
def state():
    """ Returns the state vector """
    return [c_main.v,
        c_main.w]

#
# State vector printing function
#
def print_state():
    """ Prints the current state to the screen """

    f = "{:<6}  {:<20}  {:<20}"
    print("-"*80)
    print(f.format("Name", "State value", "Derivative"))
    f = "{: <6}  {:< 20.13e}  {:< 20.13e}"
    print(f.format("Main.v", c_main.v, c_main.d_v))
    print(f.format("Main.w", c_main.w, c_main.d_w))

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
def beat(stepSmall = 0.1, stepLarge = 0.1):
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
    vInit = c_main.v
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
        if fire: # or c_main.v > -70:
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
