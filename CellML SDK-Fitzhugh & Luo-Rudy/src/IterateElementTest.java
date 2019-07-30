import be.ugent.caagt.jmathtex.TeXFormula;
import cellml_api.*;
import dom.*;
import mathml_dom.MathMLDocument;
import mathml_dom.MathMLElement;
import mathml_dom.MathMLNodeList;


public class IterateElementTest {

    CellMLLoader cLoader;


    public IterateElementTest(){
        cLoader = new CellMLLoader();
    }
    /**
    private void iterateModelElements(){
        Model model = CellMLReader.loadFromURL(cLoader.getCellMLBootstrap(),
                "/home/ken/Desktop/CMPT405/luo_rudy_1994.cellml");
        System.out.println("Model Name:" + model.getName() + "\n");
        CellMLComponentSet componentSet = model.getModelComponents();
        CellMLComponentIterator iter = componentSet.iterateComponents();
        for(int i = 0; i < componentSet.getLength(); i++){
            CellMLComponent comp = iter.nextComponent();
            System.out.println("Component Name:"+comp.getName());
            CellMLVariableSet variableSet = comp.getVariables();
            CellMLVariableIterator varIter = variableSet.iterateVariables();
            for(int j = 0; j < variableSet.getLength(); j++){
                CellMLVariable variable = varIter.nextVariable();
                System.out.println("Variable Name:"+variable.getName());
            }

            System.out.println();
        }
        ConnectionSet connectionSet = model.getConnections();
        ConnectionIterator conIter = connectionSet.iterateConnections();
        for(int i = 0; i < connectionSet.getLength(); i++){
            Connection connection = conIter.nextConnection();
            MapComponents mapComponent = connection.getComponentMapping();
            System.out.println("Connection Component1: "+mapComponent.getFirstComponentName() +
                    "    Component2: " + mapComponent.getSecondComponentName());
            MapVariablesSet variableSet = connection.getVariableMappings();
            MapVariablesIterator varIter = variableSet.iterateMapVariables();
            for(int j =0; j < variableSet.getLength(); j++){
                MapVariables mapVar = varIter.nextMapVariable();
                System.out.println("\t Variable1: "+mapVar.getFirstVariableName() +
                        "    Variable2: " + mapVar.getSecondVariableName());
            }
            System.out.println();
        }
    }
     **/

    public void getCellModel(){

        Model model = CellMLReader.loadFromURL(cLoader.getCellMLBootstrap(),
                "/home/ken/Desktop/CMPT405/fitzhugh_1961.cellml");


        System.out.println("Model Name:" + model.getName() + "\n");

        CellMLComponentSet componentSet = model.getModelComponents();
        //System.out.println(model.getModelUnits().getLength());

        Element element = null;




        CellMLComponentIterator iterator = componentSet.iterateComponents();

        for (int i = 0; i < componentSet.getLength(); i++)
        {
            CellMLComponent component = iterator.nextComponent();
            MathList list = component.getMath();
            MathMLElementIterator mathMLElementIterator = list.iterate();
            for(int j = 0; j < list.getLength(); j++)
            {
                MathMLElement mathMLElement = mathMLElementIterator.next();

                NodeList nodeList = mathMLElement.getChildNodes();

                System.out.println(mathMLElement.getTagName());

                for (int x = 0; x < nodeList.getLength(); x ++)
                {
                    Node node = nodeList.item(x);
                    System.out.println(node.getNodeName());
                }
            }
        }



    }

    public void printNode()
    {


    }


    public static void main(String [] args ){
        IterateElementTest ietest = new IterateElementTest();
        //ietest.iterateModelElements();
        ietest.getCellModel();
    }
}