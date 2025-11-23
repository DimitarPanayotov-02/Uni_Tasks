package Java_Language_Tasks.PNPE_Lab.Lab_Upr_4.Zad_1;
import java.util.Scanner;

public class Main1 {


    public static void main(String[] args) {
        try{
            probaKod();
        }
        catch(IztrelvaneFaliorException e){
            System.out.println(e.getMessage());

        }
        }


        private static void probaKod() throws IztrelvaneFaliorException{
            Raketa r1 = new Raketa();
            Scanner scanner = new Scanner(System.in);
            
            String kod = scanner.nextLine();

            if(!"Start".equals(kod)){
                throw new IztrelvaneFaliorException();
            }else{
                System.out.println(r1.prevoz());
            }

        
            //"String 1".equals("234234")
            
        
        }

    

    public static class IztrelvaneFaliorException extends Exception{
        @Override
        public String getMessage(){
            return "Ne izletq";
        }
    }

}
