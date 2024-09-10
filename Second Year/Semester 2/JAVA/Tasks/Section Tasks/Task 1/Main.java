import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // First Task
        
        System.out.println("******* TASK 1 ******");
        System.out.print("Enter a Year: ");
        Scanner input = new Scanner(System.in);
        int year = input.nextInt();
        if (year%4==0 || year%400 == 0) {
            System.out.println(year + " is a Leap Year");
        }else{
            System.out.println(year + " is NOT a Leap Year");
        }

        // Task 2
        System.out.println("\n\n******* TASK 2 ******");
        int sumOdd = 0, sumEven = 0;
        for(int i=0; i!=5; ++i){
            System.out.print("Enter Number #"+i+": ");
            int num = input.nextInt();
            if(num%2==0) sumEven+=num;
            else sumOdd+=num;
        }
        System.out.println("Sum of Evens = "+sumEven);
        System.out.print("Sum of Odds = "+sumOdd);



        // Task 3
        System.out.println("\n\n******* TASK 3 ******");
        System.out.print("Enter your score: ");
        int score = input.nextInt();
        score = score/10;
        char grade;
        switch (score) {
            case 10:
            case 9:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            case 6:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }
        if(score>0 && score <= 100)
            System.out.println("Your Grade Is: " + grade);
        else 
            System.out.println("Ivalid Input");

    // Infinite Loop
    
        






    }
}