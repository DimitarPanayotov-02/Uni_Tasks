package Java_Language_Tasks.PNPE_Lab.Lab_Upr_3.Zadacha_1;

public class IgrachMain {
    public static void main(String[] args){
        Igrach[] igrachiArr = {new Futbolist() , new Shahmatist()};
        int b = 2;
        for (int i = 0; i<b;i++ ){
            igrachiArr[i].play();
        }

    }
    
}
