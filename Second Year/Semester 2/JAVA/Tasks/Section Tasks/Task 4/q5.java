import java.util.Scanner;

public class q5 {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n;
        System.out.println("Enter number of elements");
        n = input.nextInt();

        int[] numbers = new int[n];
        take_array(numbers);
        int[] unique = new int[n];
        int pos = 0;

        for (int i = 0; i < numbers.length; i++) {
            if (number_of_shown(numbers, numbers[i]) == 1) {
                unique[pos] = numbers[i];
                pos++;
            }
        }

        print_array(unique);


    }

    static int number_of_shown(int[] a, int num){
        int count =0;
        for (int i = 0; i < a.length; i++) {
            if (a[i] == num) {
                count++;
            }
        }
        return count;
    }

    static void take_array(int[] a){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter array elements");
        for (int i = 0; i < a.length; i++) {
            int number = input.nextInt();
            a[i] = number;
        }
    }
    static void print_array(int[] a){
        System.out.println("Array elements: ");
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
    }

}
