package Java_Language_Tasks.PNPE_Lab.Lab_Upr_6.Zad_1;

import java.util.Scanner;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class Main {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
        UchebenKurs[] kursove = { new Matematika(), new Informatika() };

        for (UchebenKurs kurs : kursove) {
            kurs.zapishi(scanner);
        }

        try{
            System.out.println("\nIme na fajl za zapis na dannite");
            String imeFail = scanner.nextLine();
            
            File file = new File(imeFail);
            try(FileWriter fw = new FileWriter(file)){
                for(UchebenKurs kurs : kursove){
                    fw.write(kurs.formatiraniDanni());
                    fw.write("\n");
                }
                fw.close();
            }

            System.out.println("dannite za studenti sa zapisani: "+ file.getAbsolutePath());
        
            File fileUspeh = new File("Sreden_uspeh.txt");
            try(FileWriter fw = new FileWriter(fileUspeh)){
                for(UchebenKurs kurs : kursove){
                    double sredno = kurs.smetniUspeh();
                    fw.write(kurs.getImeKurs() + " - Sreden uspeh: " + String.format("%.2f", sredno) + "\n");
                }
                fw.close();
            }

            System.out.println("dannite za sreden uspeh sa zapisani: "+ fileUspeh.getAbsolutePath());
        
        } catch (IOException e){
            System.out.print("Exception");
        } 

        scanner.close();

        
    }
    
}
