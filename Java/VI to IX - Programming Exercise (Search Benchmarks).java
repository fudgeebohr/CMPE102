import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Random;
import java.util.Scanner;

public class Main {
    
    public static int sequential_search(List<Integer> array, int value) {
        int count = 0;
        for (int i = 0; i < array.size(); i++) {
            count += 1;
            if (array.get(i) == value) {
                return count;
            }
        }
        return -1;
    }
    
    public static int binary_search(List<Integer> array, int value) {
        int count = 0;
        int low = 0;
        int high = array.size() - 1;
        while (low <= high) {
            count += 1;
            int mid = (low + high) / 2;
            if (array.get(mid) == value) {
                return count;
            } else if (array.get(mid) < value) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
    
    public static void main(String[] args) {
        List<Integer> array = new ArrayList<Integer>();
        Random random = new Random();
        for (int i = 0; i < 20; i++) {
            array.add(random.nextInt(100) + 1);
        }
        array.sort(null);
        
        Scanner scan = new Scanner(System.in);
        System.out.println("\nFull Name: ");
        String name = scan.nextLine();
        
        System.out.println("\nBenchmark Array: " + array);

        System.out.print("Target Value: ");
        int value = scan.nextInt();
        
        System.out.println("Sequential Search Algorithm Comparisons: " + sequential_search(array, value));
        System.out.println("\nBinary Search Algorithm Comparisons: " + binary_search(array, value));
    }
}
