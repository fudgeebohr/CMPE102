import java.util.Scanner;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        Random rand = new Random();
        int[] lotteryNumbers = new int[7];
        for (int i = 0; i < 7; i++) {
            int randomNum = rand.nextInt(10);
            lotteryNumbers[i] = randomNum;
        }
        
        Scanner scan = new Scanner(System.in);
        System.out.println("Full Name: ");
        String name = scan.nextLine();
        
        System.out.print("Generated Lottery Numbers: ");
        for (int num : lotteryNumbers) 
        {
            System.out.print(num + " ");
        }
    }
}
