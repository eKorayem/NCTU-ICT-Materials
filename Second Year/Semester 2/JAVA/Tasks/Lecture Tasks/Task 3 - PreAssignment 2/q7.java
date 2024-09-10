import java.util.Scanner;

public class q7 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int array[] = new int[5];
        System.out.println("Enter Array Elements");
        for (int i = 0; i < array.length; i++) {
            int number = input.nextInt();
            array[i] = number;

        }
        bubbleSort(array);
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
    }

    static void bubbleSort(int arr[])
    {
        int i, j, temp;
        boolean swapped;
        for (i = 0; i < arr.length; i++) {
            swapped = false;
            for (j = 0; j < arr.length - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    
                    // Swap arr[j] and arr[j+1]
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }

            if (swapped == false)
                break;
        }
    }
}