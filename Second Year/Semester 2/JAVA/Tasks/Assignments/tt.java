import java.util.Scanner;

public class tt {
    static void scoring(){
        Scanner input = new Scanner(System.in);
        double score = 0;
        for (int i = 0; i < 4; i++) {
            System.out.println("Enter weigt");
            double w = input.nextDouble();

            System.out.println("Enter grade");
            double g = input.nextDouble();

            score += w*g;
        }
    }
    public static void main(String[] args) {
        
    }
}
