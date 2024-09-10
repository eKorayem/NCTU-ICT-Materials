import java.util.Scanner;
public class task_2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double total_score=0;
        double grade;
        outerloop:
        while (true) {
            total_score = 0;
            System.out.println("Enter Student Grades: (enter -1 to quite)");
            for (int j = 0; j != 6; j++) {
                grade = input.nextDouble();
                if (grade<0) break outerloop;
                total_score += grade;
            }
            System.out.println("Student Score is " + total_score);
        }
    }
}

// int i=0;
//         System.out.println("Enter Student Grades: (enter -1 to quite)");
//         do {
//             ++i;
//             grade = input.nextDouble();

//             if (grade != -1) {
//                 total_score += grade;
//             }
//             if(i==6){
//                 System.out.println("Student Score is " + total_score);
//                 i=0;
//                 total_score = 0;
//             }
//         } while (grade != -1);
        // ========== Way 2 ============
        


    // Way 3



    





    // for (int j = 1; ; j++) {
    //     System.out.println("Enter Student Grades: (enter -1 to quite)");
    //     boolean to_break = false;
    //     total_score=0;
    //     for(int i=0; i!=6; ++i){
    //         grade = input.nextDouble();
    //         if (grade<0) {
    //             to_break = true;
    //             break;
    //         }
    //         total_score+=grade;
    //     }
    //     if (to_break) break;
    //     System.out.println("Student Score is " + total_score);
    // }