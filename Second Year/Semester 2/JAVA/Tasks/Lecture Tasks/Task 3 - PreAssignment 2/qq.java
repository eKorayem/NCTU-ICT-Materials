import java.util.Arrays;
import java.util.Scanner;

public class qq {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int array[][] = new int[5][5];
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length; j++) {
                // int number = input.nextInt();
                int number = (int)(Math.random()*10);
                array[i][j] = number;
            }
        }
        System.out.println("Before Sorting");
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length; j++) {
                System.out.print(array[i][j] + " ");
            }System.out.println();
        }

        int array_1d[] = new int[25];
        int pos = 0;

        // Convert 2d to 1d
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length; j++) {
                array_1d[pos] = array[i][j];
                pos++;
            }
        }System.out.println();

        Arrays.sort(array_1d);
        
        // Convert 1d to 2d
        int row = 0;
        for (int i = 0; i < array_1d.length; i++) {
            array[row][i%5] = array_1d[i];
            if(i%5==4) row++;
        }

        System.out.println("After Sorting");
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length; j++) {
                System.out.print(array[i][j] + " ");
            }System.out.println();
        }
        // Input : Random
        // Output : Random : X(i j) < X(i+1 j+1)
    }
}