import java.util.Scanner;

import javax.sound.midi.Soundbank;

public class Main {
    public static void main(String[] args){
        // Task 1
        System.out.println("========== T A S K 1 ==========");
        Scanner input = new Scanner(System.in);
        int count=0;
        System.out.println("Enter 10 numbers");
        for (int i = 0; i != 10; i++) {
            int num = input.nextInt();
            count += (num%2==0)? 0 : 1;
        }
        System.out.println("The sum of odd Number: " + count);

        // Task 2
        System.out.println("\n========== T A S K 2 ==========");
        System.out.println("Enter two numbers");
        int num1 = input.nextInt();
        int num2 = input.nextInt();
        int divisor = (num1>=num2)? num2:num1 ;
        while (divisor!=0) {
            if (num1%divisor==0 && num2%divisor==0) {
                break;
            }
            divisor--;
        }
        System.out.println("The GCD is: " + divisor);

        // Task 3
        System.out.println("\n========== T A S K 3 ==========");
        int max = 0;
        int second_max = 0;
        System.out.println("Enter 10 numbers");
        for(int i=0; i!=10; ++i){
            int num = input.nextInt();
            if(num>=max){
                second_max = max;
                max = num;
            }
        }
        System.out.println("Maximum Number: " + max);
        System.out.println("Second Maximum Number: " + second_max);

    }
}  