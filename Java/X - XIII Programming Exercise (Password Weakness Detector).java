import java.util.Scanner;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Full Name: ");
        String name = scan.nextLine();

        System.out.print("Enter a password: ");
        String password = scan.nextLine();

        if (password.length() < 8) {
            System.out.println("Password is too short. It must be at least 8 characters long.");
        }

        Pattern lowercasePattern = Pattern.compile("[a-z]");
        Pattern uppercasePattern = Pattern.compile("[A-Z]");
        Matcher lowercaseMatcher = lowercasePattern.matcher(password);
        Matcher uppercaseMatcher = uppercasePattern.matcher(password);
        if (!lowercaseMatcher.find() || !uppercaseMatcher.find()) {
            System.out.println("Password must contain at least one uppercase letter and one lowercase letter.");
        }

        Pattern digitPattern = Pattern.compile("\\d");
        Matcher digitMatcher = digitPattern.matcher(password);
        if (!digitMatcher.find()) {
            System.out.println("Password must contain at least one numeric digit.");
        }

        Pattern specialCharPattern = Pattern.compile("[!@#$%^&*(),.?\":{}|<>]");
        Matcher specialCharMatcher = specialCharPattern.matcher(password);
        if (!specialCharMatcher.find()) {
            System.out.println("Password must contain at least one special character.");
        }

        Pattern uppercaseSeqPattern = Pattern.compile("[A-Z]{3,}");
        Pattern lowercaseSeqPattern = Pattern.compile("[a-z]{3,}");
        Pattern digitSeqPattern = Pattern.compile("\\d{3,}");
        Pattern repeatingSeqPattern = Pattern.compile("(.)\\1{2,}");
        if (uppercaseSeqPattern.matcher(password).find()) {
            System.out.println("Password contains a sequence of consecutive uppercase letters.");
        }
        if (lowercaseSeqPattern.matcher(password).find()) {
            System.out.println("Password contains a sequence of consecutive lowercase letters.");
        }
        if (digitSeqPattern.matcher(password).find()) {
            System.out.println("Password contains a sequence of consecutive numeric digits.");
        }
        if (repeatingSeqPattern.matcher(password).find()) {
            System.out.println("Password contains a repeating sequence of characters.");
        }
        
    }

}
