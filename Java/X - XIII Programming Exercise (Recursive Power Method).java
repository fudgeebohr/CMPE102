import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Full Name: ");
        String name = scan.nextLine();

        System.out.print("Enter the base: ");
        double base = scan.nextDouble();

        System.out.print("Enter the exponent: ");
        int exponent = scan.nextInt();

        double result = power(base, exponent);

        System.out.println(base + " raised to the power of " + exponent + " is " + result);

        scan.close();
    }

    public static double power(double base, int exponent) {
        double result = 1.0;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }
}
