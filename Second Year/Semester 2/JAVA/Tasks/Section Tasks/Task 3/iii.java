import java.util.Scanner;

public class iii {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter no of rows: ");
        int rows = input.nextInt();
        for(int i=1; i<=rows; ++i){
            for(int space=0; space!=rows-i; space++){
                System.out.print(" ");
            }
            for (int star=1; star<=i; star++) {
                System.out.print("*");
            }
            System.err.println();
        }
    }
}
