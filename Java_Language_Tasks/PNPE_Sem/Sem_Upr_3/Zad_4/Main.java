package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_4;

public class Main {
    
    public static void main(String[] args) {
        String fileName = "books_array.ser";


        Book[] books = {
            new Book("Pod Igoto", "Ivan"),
            new Book("Hamlet", "Shekspir"),
            new Book("Prestuplenie i nakazanie", "Dostoevski")
        };

        BookSerializer.serializeBooks(books, fileName);

        Book[] restoredBooks = BookSerializer.deserializeBooks(fileName);

        if (restoredBooks != null) {
            System.out.println("\n Vastanoveni knigi:");
            for (Book b : restoredBooks) {
                System.out.println(b);
            }
        }

    }


}