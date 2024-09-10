import java.util.Scanner;

public class vi {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter no of rows: ");
        int rows = input.nextInt();
        for (int i = 1; i <= rows; i++) {
            for(int space=rows-i; space!=0; space--){
                System.out.print(" ");
            }
            for(int j=0; j!=i; j++){
                System.out.print(i-j);
            }
            for(int j=2; j<=i; j++){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}
