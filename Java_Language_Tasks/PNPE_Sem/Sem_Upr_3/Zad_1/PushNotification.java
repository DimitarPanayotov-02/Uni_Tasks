package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_1;

public class PushNotification implements Message{
    String deviceId;
    String notificationText;

    public PushNotification(String deviceId, String notificationText) {
        this.deviceId = deviceId;
        this.notificationText = notificationText;
    }

    @Override
    public void send() {
        System.out.println("Izprashtane na push izvestie do ustrojstvo: " + deviceId);
        System.out.println("Tekst: " + notificationText);
        System.out.println("-------------------------------");
    }
}