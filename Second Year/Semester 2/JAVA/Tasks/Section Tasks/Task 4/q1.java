import java.util.Scanner;

public class q1 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n;
        System.out.println("Enter number of elements");
        n = input.nextInt();

        int[] numbers = new int[n];
        
        int odd_counter = 0, even_counter = 0;

        take_array(numbers);

        for (int i = 0; i < n; i++) {
            even_counter = (numbers[i] % 2 == 0)? even_counter++:odd_counter++;
        }

        System.out.println("Even : " + even_counter);
        System.out.println("ODD : " + odd_counter);
        
    }

    static void take_array(int[] a){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter array elements");
        for (int i = 0; i < a.length; i++) {
            int number = input.nextInt();
            a[i] = number;
        }
    }
}