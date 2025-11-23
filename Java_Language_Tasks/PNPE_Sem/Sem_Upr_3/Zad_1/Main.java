package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_1;

public class Main {
    public static void main(String[] args) {
        Message email = MessageFactory.createMessage("email");
        Message sms = MessageFactory.createMessage("sms");
        Message push = MessageFactory.createMessage("push");

        email.send();
        sms.send();
        push.send();
    }
}
