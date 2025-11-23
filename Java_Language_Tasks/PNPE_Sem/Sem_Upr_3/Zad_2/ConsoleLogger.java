package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_2;

public class ConsoleLogger implements Logger{

    @Override
    public void log(String message) {
        System.out.println("[Konzolen log] " + message);
    }
    
}
