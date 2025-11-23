package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_1;

public class SMSMessage implements Message {

    String phoneNumber;
    String text;

    public SMSMessage(String phoneNumber, String text) {
        this.phoneNumber = phoneNumber;
        this.text = text;
    }
    

    @Override
    public void send() {
        System.out.println("Izprashtane na sms do: " + phoneNumber);
        System.out.println("Tekst: " + text);
        System.out.println("-------------------------------");
    }
}
