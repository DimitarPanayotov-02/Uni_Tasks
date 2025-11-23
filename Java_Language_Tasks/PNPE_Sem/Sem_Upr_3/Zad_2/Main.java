package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_2;

public class Main {
    
    public static void main(String[] args) {
        Logger consoleLogger = new ConsoleLogger();
        Application app1 = new Application(consoleLogger);
        app1.logInfo("Startirane na prilojenieto...");

        Logger fileLogger = new FileLogger("app_log.txt");
        Application app2 = new Application(fileLogger);
        app2.logInfo("Prilojenieto zapisva logove vuv faila");
    }
}
