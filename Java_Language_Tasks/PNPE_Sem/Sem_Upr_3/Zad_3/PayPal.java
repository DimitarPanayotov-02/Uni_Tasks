package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_3;

public class PayPal extends PaymentMethod{
    
    String email;

    public PayPal(double amount, String email) {
        super(amount);
        this.email = email;
    }

    @Override
    public void processPayment() {
        System.out.println("Obrabotka na plashtane chrez PayPal...");
        System.out.println("Imejl na akaunt: " + email);
        System.out.println("Suma: " + amount + " lv.");
        System.out.println("-------------------------------");
    }
}
