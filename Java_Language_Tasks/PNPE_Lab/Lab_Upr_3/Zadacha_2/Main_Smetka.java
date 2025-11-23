package Java_Language_Tasks.PNPE_Lab.Lab_Upr_3.Zadacha_2;

public class Main_Smetka{
    
    public static void main(String[] args) {
        Bankova_Smetka s1 = new Spestovna_Smetka();
        Bankova_Smetka s2 = new Tekushta_Smetka();
        
        System.out.println(s2.teglene(500,200));
        System.out.println(s2.lihva(300, 1));
    }
}
