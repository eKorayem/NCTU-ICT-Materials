public class tt {
    public static void main(String[] args) {
        int array_1d[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int array_2d[][] = new int[3][3];

        int row = 0;
        for (int i = 0; i < array_1d.length; i++) {
            array_2d[row][i%3] = array_1d[i];
            if(i%3==2) row++;
        }

        for (int i = 0; i < array_2d.length; i++) {
            for (int j = 0; j < array_2d.length; j++) {
                System.out.print(array_2d[i][j] + " ");
            }System.out.println();
        }

        
        public class MyClass {
            private int instanceVariable;
        
            public void setInstanceVariable(int value) {
                this.instanceVariable = value;
            }
        
            public int getInstanceVariable() {
                return this.instanceVariable;
            }
        }
        
        String str1 = "Hello";
        String str2 = "Hello";
        boolean referenceEquals = (str1 == str2); // Compares references, returns true

         


    }
}
