/*
 *                      TASK 1
 *                        Q1
 */

import java.util.Scanner;

public class Q1 {
    static void scoring(double w_1, double w_2, double w_3, double w_4, double w_5,double val_1, double val_2, double val_3, double val_4, double val_5){
        val_1*=w_1; val_2*=w_2; val_3*=w_3; val_4*=w_4; val_5*=w_5;
        double score = val_1+val_2+val_3+val_4+val_5;
        System.out.println("The male Scoring is: "+score);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter values of weight");
        double w_1 = input.nextDouble();
        double w_2 = input.nextDouble();
        double w_3 = input.nextDouble();
        double w_4 = input.nextDouble();
        double w_5 = input.nextDouble();

        System.out.println("Enter values of mall grades");
        double val_1 = input.nextDouble();
        double val_2 = input.nextDouble();
        double val_3 = input.nextDouble();
        double val_4 = input.nextDouble();
        double val_5 = input.nextDouble();
        scoring(w_1, w_2, w_3, w_4, w_5, val_1, val_2, val_3, val_4, val_5);
    }
}