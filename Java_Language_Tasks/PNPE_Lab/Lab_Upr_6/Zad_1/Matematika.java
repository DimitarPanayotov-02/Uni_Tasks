package Java_Language_Tasks.PNPE_Lab.Lab_Upr_6.Zad_1;

import java.util.Scanner;

public class Matematika extends UchebenKurs{
    
    public Matematika(){
        super("Matematika");
    }
    
    @Override
    public void zapishi(Scanner scanner){
        System.out.println("Zapisvane studenti: " + imeKurs);
        for(int i = 0; i<studenti.length; i++){
            System.out.println("Ime na student " + (i+1)+ ":");
            studenti[i] = scanner.nextLine();
            System.out.println("3 Ocenki za " + studenti[i] + ":");
            for(int j = 0; j<3;j++){
                ocenki[i][j] = Double.parseDouble(scanner.nextLine());
            }
        }

    }
    
    
    @Override
    public double smetniUspeh(){
        double suma = 0;
        int broi = 0;
        for (double[] student : ocenki) {
            for (double ocenka : student) {
                suma += ocenka;
                broi++;
            }
        }
        return suma / broi;
    }
    
}
