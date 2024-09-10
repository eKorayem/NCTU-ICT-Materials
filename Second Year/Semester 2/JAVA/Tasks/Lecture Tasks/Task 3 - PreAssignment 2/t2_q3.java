
public class t2_q3 {
    public static class Student {
        // Instance variables
        private String name;
        private int age;
        private String major;
    
        // Constructor
        public Student(String name, int age, String major) {
            this.name = name;
            this.age = age;
            this.major = major;
        }
    
        // Instance method to display student information
        public void displayInfo() {
            System.out.println("Student Information:");
            System.out.println("Name: " + name);
            System.out.println("Age: " + age);
            System.out.println("Major: " + major);
        }
    
        // Instance method to check if the student is eligible to vote
        public boolean isEligibleToVote() {
            return age >= 18;
        }
    
        // Instance method to update student's major
        public void updateMajor(String newMajor) {
            this.major = newMajor;
            System.out.println("Major updated to: " + newMajor);
        }
    }
    
    public static void main(String[] args) {
        Student student1 = new Student("Alice", 20, "Computer Science");
        student1.displayInfo();

        System.out.println("Is " + student1.name + " eligible to vote? " + student1.isEligibleToVote());

        student1.updateMajor("Software Engineering");
        student1.displayInfo();
    }
}