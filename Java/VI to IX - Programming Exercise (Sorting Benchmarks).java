import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Random;
import java.util.Scanner;

public class Main {
    
  public static int bubbleSort(int[] arr) {
        int swaps = 0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swaps++;
                }
            }
        }
        return swaps;
    }

    public static int selectionSort(int[] arr) {
        int swaps = 0;
        for (int i = 0; i < arr.length; i++) {
            int min = i;
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }
            if (min != i) {
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
                swaps++;
            }
        }
        return swaps;
    }

    public static int insertionSort(int[] arr) {
        int swaps = 0;
        for (int i = 1; i < arr.length; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && key < arr[j]) {
                arr[j + 1] = arr[j];
                j--;
                swaps++;
            }
            arr[j + 1] = key;
        }
        return swaps;
    }
    public static int binary(List<Integer> array, int value) {
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
        for (int num = 0; num < 20; num++) {
            array.add(random.nextInt(100) + 1);
        }
        
         Random rand = new Random();
        int[] arr1 = new int[20];
        int[] arr2 = new int[20];
        int[] arr3 = new int[20];
        for (int i = 0; i < 20; i++) {
            arr1[i] = rand.nextInt(100);
            arr2[i] = rand.nextInt(100);
            arr3[i] = rand.nextInt(100);
        }
        array.sort(null);
        
        Scanner scan = new Scanner(System.in);
        System.out.println("\nFull Name: ");
        String name = scan.nextLine();
        
        System.out.println("\nBenchmark Array: " + array);
        
        System.out.println("Bubble Sort Swap Count: " + bubbleSort(arr1));
        
        System.out.println("Selection Sort Swap Count: " + selectionSort(arr2));
        
        System.out.println("Insertion Sort Swap Count: " + insertionSort(arr3));
    }
    }
