import java.util.Scanner;

public class scoringModel {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double mall_1=0, mall_2=0, mall_3=0, mall_4=0;
        System.out.println("Enter the percentages");
        double per_1 = input.nextDouble();
        double per_2 = input.nextDouble();
        double per_3 = input.nextDouble();
        double per_4 = input.nextDouble();
        double per_5 = input.nextDouble();

        System.out.println("Enter the five values");
        double val_1 = input.nextDouble();
        double val_2 = input.nextDouble();
        double val_3 = input.nextDouble();
        double val_4 = input.nextDouble();
        double val_5 = input.nextDouble();       
        mall_1 = val_1*per_1 + (val_2*per_2) + (val_3*per_3) + (val_4*per_4) + val_5*per_5;
        
        System.out.println("Enter the five values");
        val_1 = input.nextDouble();
        val_2 = input.nextDouble();
        val_3 = input.nextDouble();
        val_4 = input.nextDouble();
        val_5 = input.nextDouble();       
        mall_2 = val_1*per_1 + (val_2*per_2) + (val_3*per_3) + (val_4*per_4) + val_5*per_5;
        
        System.out.println("Enter the five values");
        val_1 = input.nextDouble();
        val_2 = input.nextDouble();
        val_3 = input.nextDouble();
        val_4 = input.nextDouble();
        val_5 = input.nextDouble();       
        mall_3 = val_1*per_1 + (val_2*per_2) + (val_3*per_3) + (val_4*per_4) + val_5*per_5;
        
        System.out.println("Enter the five values");
        val_1 = input.nextDouble();
        val_2 = input.nextDouble();
        val_3 = input.nextDouble();
        val_4 = input.nextDouble();
        val_5 = input.nextDouble();       
        mall_4 = val_1*per_1 + (val_2*per_2) + (val_3*per_3) + (val_4*per_4) + val_5*per_5;
        
        System.out.println("Values");
        System.out.println(mall_1);
        System.out.println(mall_2);
        System.out.println(mall_3);
        System.out.println(mall_4);
    }
}
