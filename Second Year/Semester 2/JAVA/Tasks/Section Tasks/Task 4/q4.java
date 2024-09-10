import java.util.Scanner;



public class q4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n;
        System.out.println("Enter number of elements");
        n = input.nextInt();

        int[] numbers = new int[n];
        int[] numbers_copy = new int[n];

       take_array(numbers);

        for (int i = 0; i < n; i++) {
            numbers_copy[i] = numbers[i];
        }

        System.out.println("Array1");
        print_array(numbers);
        System.out.println("Array2");
        print_array(numbers_copy);
        

        
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
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }
}
