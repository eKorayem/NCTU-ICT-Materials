import java.util.Scanner;

/**
 * q1
 */
public class q1 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int start = input.nextInt();
        int end = input.nextInt();
        
        for (int i = start; i <= end; i++) {
            if(i==2){
                System.err.println(i);continue;
            }
            for (int j = 2; j < i; j++) {
                if (i%j==0) {
                    break;
                }
                System.err.println(i);
                break;
            }
        }
    }
}