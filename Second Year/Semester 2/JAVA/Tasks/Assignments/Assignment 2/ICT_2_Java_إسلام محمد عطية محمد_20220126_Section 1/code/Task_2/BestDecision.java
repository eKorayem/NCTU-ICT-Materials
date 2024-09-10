/*
 *                      TASK 2
 *                        Q1
 */

public class BestDecision {
    private double weight[] = new double[5];
    private double grades_of_all_malls[][] = new double[4][5];

    BestDecision(double weight[], double grades_of_all_malls[][]){
        this.weight = weight;
        this.grades_of_all_malls = grades_of_all_malls;
    }

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
}