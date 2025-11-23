package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_3;

public class CreditCard extends PaymentMethod{
    
    String cardNumber;
    String cardHolder;

    public CreditCard(double amount, String cardNumber, String cardHolder) {
        super(amount);
        this.cardNumber = cardNumber;
        this.cardHolder = cardHolder;
    }

    @Override
    public void processPayment() {
        System.out.println("Obrabotka na plashtane chrez kreditna karta");
        System.out.println("Ime na kartodurjatel: " + cardHolder);
        System.out.println("Nomer na kartata: **** **** **** " + cardNumber.substring(cardNumber.length() - 4));
        System.out.println("Suma: " + amount + " lv.");
        System.out.println("-------------------------------");
    }
}
