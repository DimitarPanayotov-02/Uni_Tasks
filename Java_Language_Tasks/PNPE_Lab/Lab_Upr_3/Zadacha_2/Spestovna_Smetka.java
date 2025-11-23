package Java_Language_Tasks.PNPE_Lab.Lab_Upr_3.Zadacha_2;

public class Spestovna_Smetka extends Bankova_Smetka {
   
    public double vnasqne(double pari){
        return pari += pari;

    }
    public double teglene(double pari, double iztegli){
        return pari -= iztegli;

    }
    public double lihva(double pari, int lihva){
        return pari += ((pari * lihva)/100);

    }

}
