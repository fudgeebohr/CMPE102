import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Full Name: ");
        String name = scan.nextLine();
        
        while (true) {
            System.out.println("----- ASTORNOMY HELPER -----");
            System.out.println("Select a Planet: ");
            System.out.println("(1) Mercury");
            System.out.println("(2) Venus");
            System.out.println("(3) Earth");
            System.out.println("(4) Mars");
            System.out.println("(5) Exit the program");

            System.out.println("Enter your selection: ");
            int choice = scan.nextInt();

            if (choice == 1) {
                System.out.println("--- Mercury ---");
                System.out.println("Average distance from the sun: 57.9 million kilometers");
                System.out.println("Mass: 3.31 x 10^23kg");
                System.out.println("Surface temperature: -173 to 430 degrees Celsius");
            } else if (choice == 2) {
                System.out.println("--- Venus ---");
                System.out.println("Average distance from the sun: 108.2 million kilometers");
                System.out.println("Mass: 4.87 x 10^24kg");
                                System.out.println("Surface temperature: 472 degrees Celsius");
            } else if (choice == 3) {
                System.out.println("--- Earth ---");
                System.out.println("Average distance from the sun: 149.6 million kilometers");
                System.out.println("Mass: 5.967 x 10^24kg");
                System.out.println("Surface temperature: -50 to 50 degrees Celsius");
            } else if (choice == 4) {
                System.out.println("--- Mars ---");
                System.out.println("Average distance from the sun: 227.9 million kilometers");
                System.out.println("Mass: 0.6424 x 10^24kg");
                System.out.println("Surface temperature: -140 to 20 degrees Celsius");
            } else if (choice == 5) {
                System.out.println("Exiting the program...");
                break;
            } else {
                System.out.println("Invalid selection. Please try again.");
            }
            
            System.out.println(name);
        }
        
        scan.close();
    }
}
