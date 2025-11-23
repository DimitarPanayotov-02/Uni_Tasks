package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_1;

public class MessageFactory {
    public static Message createMessage(String type) {
        switch (type.toLowerCase()) {
            case "email":
                return new EmailMessage("user@example.com", "Dobre doshli!", "akaunta e suzdaden.");
            case "sms":
                return new SMSMessage("+359888123456", "vashiq kod e 1234.");
            case "push":
                return new PushNotification("DEVICE_ABC123", "imash novo izvestie!");
            default:
                throw new IllegalArgumentException("Nevaliden tip suobshtenie: " + type);
        }
    }
}
