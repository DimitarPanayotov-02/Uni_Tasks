package Java_Language_Tasks.PNPE_Lab.Lab_Upr_6.Zad_1;

import java.util.Scanner;

public abstract class UchebenKurs {
    String imeKurs;
    String[] studenti = new String[5];
    double[][] ocenki = new double[5][3];

    public UchebenKurs(String imeKurs){
        this.imeKurs = imeKurs;
    }

    public abstract void zapishi(Scanner scanner);

    public abstract double smetniUspeh();

    public String getImeKurs(){
        return imeKurs;
    }


    public String formatiraniDanni() {
        StringBuilder sb = new StringBuilder();
        sb.append("Kurs: ").append(imeKurs).append("\n");
        for (int i = 0; i < studenti.length; i++) {
            sb.append("Student ").append(i + 1).append(": ").append(studenti[i]).append("\n");
            sb.append("Ocenki: ");
            for (int j = 0; j < 3; j++) {
                sb.append(ocenki[i][j]).append(" ");
            }
            sb.append("\n");
        }
        return sb.toString();
    }
}
