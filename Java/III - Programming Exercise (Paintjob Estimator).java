import java.util.Scanner;

public class main{
    public static void main(String[]args){
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Name: ");
        String name = scan.nextLine();
        
        System.out.println("Area of the wall (sqft): ");
        double wallArea = scan.nextDouble();
        
        System.out.println("Price of the paint (per gallon) (USD): ");
        double paintPrice = scan.nextDouble();
        
        double paintGallon = wallArea/115;
        double totalLaborTime = paintGallon*8;
        double paintCost = paintGallon*paintPrice;
        double laborCost= totalLaborTime*20;
        double totalCost = laborCost + paintCost;
        
        int laborTimeHoursInt = (int) totalLaborTime;
        double laborTimeMinutesDouble = (double) (totalLaborTime - laborTimeHoursInt);
        int laborTimeMinutesInt = (int) (60*laborTimeMinutesDouble);
        
        String paintGallonString = String.format("%.02f", paintGallon);
        String paintCostString = String.format("%.02f", paintCost);
        String laborCostString = String.format("%.02f", laborCost);
        String totalCostString = String.format("%.02f", totalCost);
        
        if(paintGallon == 1){
            System.out.println("Paint required (gallons): " + paintGallonString);    
        }else{
            System.out.println("Paint required (gallons): " + paintGallonString);
        }
        System.out.print("Labor required (hours): " + laborTimeHoursInt);

        if(laborTimeMinutesInt == 0){
            System.out.println();
        }else{
           System.out.println("Labor required (hours & minutes): " + laborTimeHoursInt + " Hours" + laborTimeMinutesInt + " Minutes");
        }
        
        System.out.println("Paint cost (USD): " + paintCostString);
        System.out.println("Labor cost (USD): " + laborCostString);
        System.out.println("Total cost (USD): " + totalCostString);
    }
}
