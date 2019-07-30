import myokit.formats.cellml
import myokit

cellml_loader = myokit.formats.cellml.CellMLImporter(True)

a_model = cellml_loader.model("../cell_models/fitzhugh_1961.cellml").clone()

a_protcol = myokit.default_protocol()

a_script = myokit.default_script()

sim = myokit.Simulation(a_model)

cl = 1000

sim.pre(99 * cl)

d = sim.run(1 * cl)

import matplotlib.pyplot as plt

plt.figure()
plt.title('Membrane Potential')

plt.plot(d['engine.time'], d['membrane.v'])

plt.show()




