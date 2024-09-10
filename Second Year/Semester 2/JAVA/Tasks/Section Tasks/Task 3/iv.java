import java.util.Scanner;

public class iv {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter no of rows: ");
        int rows = input.nextInt();
        for (int i = 1; i <= rows; i++) {
            for (int space = rows-i; space != 0; space--) {
                System.out.print(" ");
            }
            for (int star = 0; star < (2*i)-1; star++) {
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
