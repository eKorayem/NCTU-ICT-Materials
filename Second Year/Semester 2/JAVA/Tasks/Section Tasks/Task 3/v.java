import java.util.Scanner;

public class v {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter no of rows: ");
        int rows = input.nextInt();
        for (int i = 1; i <= rows; i++) {
            for (int space = rows-i; space != 0; space--) {
                System.out.print(" ");
            }
            for (int j = 0; j != (i*2)-1; ++j) {
                System.out.print(i);
            }System.out.println("");
        }
    }
}
