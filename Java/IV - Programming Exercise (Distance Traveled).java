import java.util.Scanner;

public class Main
{
  public static void main (String[] args) 
  {
      Scanner scan = new Scanner(System.in);
       
       System.out.println("Full Name: ");
       String name = scan.nextLine();
       
       System.out.println("What is the speed of the vehicle in mph? ");
       int speed = scan.nextInt();
       
       System.out.println("How many hours has it traveled? ");
       int hours = scan.nextInt();
       
       System.out.println("Hours\t\tDistance Traveled");
       System.out.println("-------------------------------");
       for (int i = 1; i <= hours; i++){
           System.out.println(i + "\t\t" + (i * speed));
       }
  }
}
