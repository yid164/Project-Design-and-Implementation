from myokit.formats import (cellml, opencl)
import myokit

cellml_importer = cellml.CellMLImporter(verbose=True)
opencl_exporter = opencl.OpenCLExporter()
opencl_ewriter = opencl.OpenCLExpressionWriter(precision=myokit.DOUBLE_PRECISION, native_math=True)
e_writer = opencl.ewriters()

# cellml_model = cellml_importer.model('../cell_models/fitzhugh_1961.cellml')
cellml_model = cellml_importer.model('../cell_models/tentusscher_noble_noble_panfilov_2004_a.cellml')



variables = cellml_model.variables()

variable_iter = variables.__iter__()

for i in range(cellml_model.count_variables()):
    a_variable = variable_iter.__next__()
    print(a_variable.name() + ' = ' + str(a_variable.eq()))






