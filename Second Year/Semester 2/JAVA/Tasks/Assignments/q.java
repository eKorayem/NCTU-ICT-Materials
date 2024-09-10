import java.util.Scanner;

/**
 * q
 */
public class q {
    static void scoring(){
        double score = 0;
        Scanner input = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            double weight = input.nextDouble();
            double grade = input.nextDouble();
            score += weight*grade;
        }
        System.out.println("Score = " + score);
    }
    public static void main(String[] args) {
        scoring();
    }
}