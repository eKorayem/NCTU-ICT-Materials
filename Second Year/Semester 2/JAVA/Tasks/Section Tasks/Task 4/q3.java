import java.util.Scanner;
public class q3 {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        int n;
        System.out.println("Enter number of elements");
        n = input.nextInt();

        int[] numbers = new int[n];

       take_array(numbers);

       System.out.print("Enter number: ");
       int number = input.nextInt();
       int counter = number_of_shown(numbers, number);
        

        System.out.println("Number occurance of " + number + " is " + counter);
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

}
