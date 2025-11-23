package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_1;

public class EmailMessage implements Message{
    String recipient;
    String subject;
    String content;
    

    public EmailMessage(String recipient, String subject, String content) {
        this.recipient = recipient;
        this.subject = subject;
        this.content = content;
    }

    @Override
    public void send() {
        System.out.println("Izprashtane na e-mail do: " + recipient);
        System.out.println("Tema: " + subject);
        System.out.println("Sydyrjanie: " + content);
        System.out.println("-------------------------------");
    }
}
