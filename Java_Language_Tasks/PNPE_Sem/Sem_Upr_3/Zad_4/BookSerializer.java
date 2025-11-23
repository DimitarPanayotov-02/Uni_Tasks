package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_4;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

public class BookSerializer {
    
    public static void serializeBooks(Book[] books, String fileName) {
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(fileName))) {
            oos.writeObject(books);
            System.out.println("Knigite sa v fail: " + fileName);
        } catch (IOException e) {
            System.out.println("Greshka pri zpis: " + e.getMessage());
        }
    }

    public static Book[] deserializeBooks(String fileName) {
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(fileName))) {
            return (Book[]) ois.readObject();
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("Greshka: " + e.getMessage());
            return null;
        }
    }
}
