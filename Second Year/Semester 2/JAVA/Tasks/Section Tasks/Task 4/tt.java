public class tt {
    public static void main(String[] args) {
        int start = 35;
        int end = 40;
        while (true) {
            int ran = start-1 + (int) (Math.random()*(end-start)+1 ) ;
            System.out.println("Random: " + ran);
            if(ran==35) break;
            
        }

    }

}
