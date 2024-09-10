import java.util.Scanner;

public class tt {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int start = input.nextInt();
        int end = input.nextInt();
// 1/1 - 1/2 +
        float sum = 0;
        for (int i = 1; i <= end; i++) {
            if (i%2==0) {
                sum -= 1/i;
            }else{
                sum += 1/i;
            }
        }

    }
}
