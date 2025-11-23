package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_3;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Izberete metod:");
        System.out.println("1. Credit Card");
        System.out.println("2. PayPal");
        System.out.print("Vashiq metod: ");
        int choice = scanner.nextInt();

        PaymentMethod payment = null;
    
        switch (choice) {
            case 1:
                System.out.print("Ime na kartodurjatel: ");
                scanner.nextLine();
                String holder = scanner.nextLine();
                System.out.print("Nomer na kartata: ");
                String card = scanner.nextLine();
                System.out.print("Vavedete suma: ");
                double amountCard = scanner.nextDouble();
                payment = new CreditCard(amountCard, card, holder);
                break;
            case 2:
                System.out.print("Vavedete PayPal imeil: ");
                scanner.nextLine();
                String email = scanner.nextLine();
                System.out.print("Vavedete suma: ");
                double amountPayPal = scanner.nextDouble();
                payment = new PayPal(amountPayPal, email);
                break;
            default:
                System.out.println("Nevaliden izbor!");
                System.exit(0);
        }

        payment.processPayment();

        scanner.close();
    }
}
