import java.util.Scanner;

public class main{
    public static void main(String[]args){
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Name: ");
        String name = scan.nextLine();
        
        System.out.println("Height (in): ");
        double height = scan.nextDouble();
        
        System.out.println("Weight (lbs): ");
        double weight = scan.nextDouble();
        
        double bmi = (weight / (Math.pow(height, 2)))*703;
        
        String bmiRating = "";
        if(bmi <= 18.5){
            bmiRating = "Underweight";
        }else if(bmi >= 18.6 && bmi <= 24.9){
            bmiRating = "Normal";
        }else if(bmi >= 25.0 && bmi <= 29.9){
            bmiRating = "Overweight";
        }else if(bmi >= 30){
            bmiRating = "Obese";
        }
        
        String bmiString = String.format("%.02f", bmi);
        
        System.out.println("Body Mass Index (BMI): " + "\n" + bmiString + " (" + bmiRating + ")");
    }
}
