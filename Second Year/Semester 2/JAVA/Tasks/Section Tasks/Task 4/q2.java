import java.util.Scanner;

public class q2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n;
        System.out.println("Enter number of elements");
        n = input.nextInt();

        int[] numbers = new int[n];

        take_array(numbers);

        System.out.print("Enter number: ");
        int number = input.nextInt();
        
        int index = is_exist(numbers, number);
        
        System.out.print("The Number Index: " + index);
    }

    static int is_exist(int[] a, int number){
        for (int i = 0; i < a.length; i++) {
            if (a[i] == number) {
                return i;
            }
        }
        return -1;
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
