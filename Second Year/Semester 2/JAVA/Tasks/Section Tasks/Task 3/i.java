import java.util.Scanner;

public class i {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the size");
        int size = input.nextInt();
        System.out.println("Enter the # of stars");
        int star_no = input.nextInt();
        
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < star_no; j++) {
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}