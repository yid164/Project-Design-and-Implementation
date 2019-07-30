import cellml_api.CellMLBootstrap;
import cellml_api.Model;
public class CellMLReader {
    public static Model loadFromURL(CellMLBootstrap cb, String inputFileName){
        return cb.getModelLoader().loadFromURL(inputFileName);
    }
    public static Model createModel(CellMLBootstrap cb, String modelString){
        return cb.createModel(modelString);
    }
}