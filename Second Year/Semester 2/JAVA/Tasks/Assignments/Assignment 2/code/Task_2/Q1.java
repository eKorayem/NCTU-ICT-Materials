/**
 * task_1
 */

public class Q1 {

    public static void main(String[] args) {
        double weight[] = {.3, .25, .25, .1, .1};

        double grades_of_all_malls[][] = {
            {40, 75, 60, 90, 80},
            {60, 80, 80, 100, 30},
            {90, 65, 79, 80, 50},
            {60, 90, 85, 90, 70}
        };
        
        double max_score = BestDecision.scoring(weight, grades_of_all_malls);
        System.out.println(max_score);





        BestDecision bb = new BestDecision(weight, grades_of_all_malls);
        
        double arr[] = bb.get_weight();
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}