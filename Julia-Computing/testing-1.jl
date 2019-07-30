using Pkg
Pkg.add("PyCall")
using PyCall
ENV["PYTHON"] = "/usr/bin/python3"
Pkg.build("PyCall")

@pyimport myokit.formats.cellml as cellml

cellml_importer = cellml.CellMLExporter()
