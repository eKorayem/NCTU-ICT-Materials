public class lab {
    public static void swap(int n1, int n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
        System.out.println("a: " + n1);
        System.out.println("b: " + n2);
    }
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        swap(a, b);

    }
}
