import java.util.Scanner;

public class assignment_1 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double mall_1=0, mall_2=0, mall_3=0, mall_4=0;
        System.out.println("Enter the percentages");
        double per_1 = input.nextDouble();
        double per_2 = input.nextDouble();
        double per_3 = input.nextDouble();
        double per_4 = input.nextDouble();

        for (int i = 1; i <= 4; i++) {
            System.out.println("Enter the Values");
            double val_1 = input.nextDouble();
            double val_2 = input.nextDouble();
            double val_3 = input.nextDouble();
            double val_4 = input.nextDouble();

            double equation = val_1*per_1 + (val_2*per_2) + (val_3*per_3) + (val_4*per_4);
            
            if (i==1) mall_1 = equation;
            if (i==2) mall_2 = equation;
            if (i==3) mall_3 = equation;
            if (i==4) mall_4 = equation;   
        }
        System.out.println("Values");
        System.out.println(mall_1);
        System.out.println(mall_2);
        System.out.println(mall_3);
        System.out.println(mall_4);
    }
}
