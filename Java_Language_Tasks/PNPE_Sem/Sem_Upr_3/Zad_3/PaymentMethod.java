package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_3;

public abstract class PaymentMethod {

    double amount;

    public PaymentMethod(double amount) {
        this.amount = amount;
    }
    
    public abstract void processPayment();

}
