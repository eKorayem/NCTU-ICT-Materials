import java.util.Scanner;

public class q6_rShift {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n;
        System.out.println("Enter number of elements");
        n = input.nextInt();

        int[] numbers = new int[n];

        take_array(numbers);
        print_array(numbers);

        rShift(numbers);
        
        print_array(numbers);
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
        }System.out.println();
    }
    static void rShift(int[] a){
        int last=0;
        for (int i = a.length-1; i >= 0; i--) {
            if(i==a.length-1)
                last = a[i];
            if(i==0){
                a[i] = last;
                break;
            }
            a[i] = a[i-1];
        }
    }
}
