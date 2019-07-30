import cellml_api.Model;
import cellml_services.ODESolverCompiledModel;
public class CellML_Service {
    CellMLLoader loader;
    public CellML_Service()
    {
        loader = new CellMLLoader();
    }

    public void CellMLService(){
        Model model = CellMLReader.loadFromURL(loader.getCellMLBootstrap(), "/home/ken/Desktop/CMPT405/fitzhugh_1961.cellml");

        ODESolverCompiledModel odeSolverCompiledModel = (ODESolverCompiledModel) model;

        System.out.println(odeSolverCompiledModel);

    }

    public static void main(String [] args)
    {
        CellML_Service service = new CellML_Service();
        service.CellMLService();
    }
}
