/*
 *                      TASK 1
 *                        Q4
 */
public class Q4 {
    static double scoring(double weight[], double grades_of_all_malls[][] ){
        double max_score = 0;
        for (int i = 0; i < 4; i++) {
            double score = 0;
            for (int j = 0; j < 5; j++) {
                score += weight[j] * grades_of_all_malls[i][j];
            }
            if (score > max_score ) max_score = score;
        }
        
        return max_score;
    }

    public static void main(String[] args) {
        double weight[] = {.3, .25, .25, .1, .1};

        double grades_of_all_malls[][] = {
            {40, 75, 60, 90, 80},
            {60, 80, 80, 100, 30},
            {90, 65, 79, 80, 50},
            {60, 90, 85, 90, 70}
        };

        double max_score = scoring(weight, grades_of_all_malls);
        System.out.println("Best decision max score is " + max_score);
    }
}