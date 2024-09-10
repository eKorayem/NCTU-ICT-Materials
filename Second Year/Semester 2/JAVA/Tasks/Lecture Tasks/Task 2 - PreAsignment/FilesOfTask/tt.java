import java.util.Scanner;

public class tt {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double num = input.nextDouble();
        // int current;
        // int two_back = 0;
        // int one_back = 1;
        double out = 1 ;
        for (int i = 2; i <= num; i++) {
            if(i%2==0){
                out -= (1.0/i);
            }
            else{
                out += (1.0/i);
            }
            
        }
        System.out.println(out);
        
    }
}
