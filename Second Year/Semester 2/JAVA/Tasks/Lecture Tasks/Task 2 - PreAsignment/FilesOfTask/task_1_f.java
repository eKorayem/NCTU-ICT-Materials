import java.util.Scanner;
class task_1_f{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter 3 numbers a, n and y, respectively");
        double x = input.nextDouble();
        double n = input.nextDouble();
        double y = input.nextDouble();
        double z = (3*x*n) + (5*y/2*x) + (3*n);
        System.out.println("The out put is " + z);
    }
}