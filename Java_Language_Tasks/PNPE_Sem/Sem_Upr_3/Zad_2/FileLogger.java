package Java_Language_Tasks.PNPE_Sem.Sem_Upr_3.Zad_2;

import java.io.FileWriter;
import java.io.IOException;

public class FileLogger implements Logger{
    
    String fileName;

    public FileLogger(String fileName) {
        this.fileName = fileName;
    }

    @Override
    public void log(String message) {
        try (FileWriter writer = new FileWriter(fileName, true)) {
            writer.write("[Failov log] " + message + "\n");
            System.out.println("Suobshtenieto e zapisano v: " + fileName);
        } catch (IOException e) {
            System.out.println("Greshka pri zapis: " + e.getMessage());
        }
    }

}
