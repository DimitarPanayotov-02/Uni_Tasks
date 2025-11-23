package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_4;

import java.io.Serializable;

public class Book implements Serializable {
    
    private static final long serialVersionUID = 1L;

    String title;
    String author;

    public Book(String title, String author) {
        this.title = title;
        this.author = author;
    }

    @Override
    public String toString() {
        return "Kniga: \"" + title + "\" ot " + author;
    }

}
