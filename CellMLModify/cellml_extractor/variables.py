import myokit
import myokit.formats
import myokit.formats.cellml

import myokit._sim.opencl as cl

cellml_importer = myokit.formats.cellml.CellMLImporter()

model = cellml_importer.model("../cell_models/luo_rudy_1991.cellml")

new_model = model.clone()


s = myokit.Simulation(model)

v = s.run(10000)






