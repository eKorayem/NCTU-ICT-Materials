import java.util.Scanner;

/**
 * q1
 */
public class q2 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int start = input.nextInt();
        float sum = 1;
        for (int i = 2; i <= start; i++) {
            if(i%2==0){
                sum -= (1.0/i);
            }else{
                sum += (1.0/i);
            }
        }
        System.out.println(sum);
    }
}