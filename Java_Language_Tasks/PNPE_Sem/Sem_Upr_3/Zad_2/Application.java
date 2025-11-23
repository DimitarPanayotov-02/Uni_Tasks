package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_2;

public class Application {
    
    Logger logger;

    public Application(Logger logger) {
        this.logger = logger;
    }

    public void logInfo(String message) {
        logger.log("INFO: " + message);
    }
}
