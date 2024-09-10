import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int num1;
    int num2;
    System.out.println("Enter the first number: ");
    num1 = input.nextInt();
    System.out.println("Enter the second number: ");
    num2 = input.nextInt();
    if (num1>num2) {
      int temp =num1;
      num1=num2;
      num2 = temp;
    }
    int sum =num1;
    do {
        num1++;
        sum += num1;
      }
     while (num1!=num2);
    System.out.println("The sum: "+sum);
  }
}
