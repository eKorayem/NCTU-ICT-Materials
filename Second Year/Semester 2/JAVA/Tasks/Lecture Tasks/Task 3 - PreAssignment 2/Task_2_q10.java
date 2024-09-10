public class Task_2_q10 {
    public static class Book {
        private String title;
        private String author;
    
        // Constructor to initialize Book objects
        public Book(String title, String author) {
            this.title = title;
            this.author = author;
        }
    
        // Getter for title
        public String getTitle() {
            return title;
        }

        // Setter for title
        public void setTitle(String title) {
            this.title = title;
        }

        // Getter for author
        public String getAuthor() {
            return author;
        }

        // Setter for author
        public void setAuthor(String author) {
            this.author = author;
        }
    }
    public static void main(String[] args) {
        Book book1 = new Book("Java Programming", "John Doe");
        Book book2 = new Book("Python Programming", "Jane Smith");

        Book[] booksArray = new Book[3];
        booksArray[0] = new Book("Data Structures and Algorithms", "Alice Johnson");
        booksArray[1] = new Book("Introduction to Machine Learning", "Bob Williams");
        booksArray[2] = new Book("Web Development with JavaScript", "Emily Brown");

        System.out.println(booksArray[0].getTitle()); // Output: Data Structures and Algorithms
        System.out.println(booksArray[1].getAuthor());  // Output: Bob Williams
    }
}


<access_modifier/ may or may not><return_type><method_name>(<parameter_list>) {
    // Method body
    // Code that defines the behavior of the method
    // May include variable declarations, control flow statements, etc.
    // Optionally, a return statement to return a value
}
