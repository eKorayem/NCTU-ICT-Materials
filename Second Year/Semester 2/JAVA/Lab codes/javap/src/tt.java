import java.util.Scanner;

public class tt {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double max_mall=0;
        System.out.println("Enter the percentages");
        double per_1 = input.nextDouble();
        double per_2 = input.nextDouble();
        double per_3 = input.nextDouble();
        double per_4 = input.nextDouble();
        System.out.println("Enter number of malls");
        int no_of_malls = input.nextInt();
        for (int i = 1; i <= no_of_malls; i++) {
            System.out.println("Enter the Values");
            double val_1 = input.nextDouble();
            double val_2 = input.nextDouble();
            double val_3 = input.nextDouble();
            double val_4 = input.nextDouble();
            double mal = val_1*per_1 + (val_2*per_2) + (val_3*per_3) + (val_4*per_4) + val_5*per_5;
            if (mal>max_mall) max_mall = mal;
        }   
    }   
}

