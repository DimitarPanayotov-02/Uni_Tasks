package Java_Language_Tasks.PNPE_Sem.Sem_Upr_1;

//15.10.2025



import java.util.Scanner;

public class Zadachi {

    
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
/* #1
        System.out.println("vuvedi chislo 1: ");
        int x = scanner.nextInt();

        System.out.println("Vuvedi chislo 2: ");
        int y = scanner.nextInt();
        if(x>y){
            System.out.println(x);
        }else{
            System.out.println(y);
        }
    
        */
/*#2
        System.out.println("vuvedi chislo 1: ");
        int x = scanner.nextInt();

        if(x%2==0){
            System.out.println("Chetno");
        }else{
            System.out.println("Nechetno");
        }

*/


/*#3 
        System.out.println("vuvedi chislo 1: ");
        int x = scanner.nextInt();

        if(x >= 1 && x <=7){
            switch(x){
                case 1:
                    System.out.println("Ponedelnik");
                    break;
                case 2:
                    System.out.println("Vtornik");
                    break;
                case 3:
                    System.out.println("Svqda");
                    break;
                case 4:
                    System.out.println("Chetvurtuk");
                    break;
                case 5:
                    System.out.println("Petuk");
                    break;
                default:
                    System.out.println("Pochivaj");

            }
        }


*/


/*#4
        System.out.println("vuvedi sedmica: ");
        String x = scanner.nextLine();



        
        switch(x){
                case "Ponedelnik":
                case "Vtornik":
                case "Svqda":
                case "Chetvurtuk":
                case "Petuk":
                    System.out.println("Working Day");
                    break;
                case "Subota":
                case "Nedelq":
                    System.out.println("Weekday");
                default:
                    System.out.println("Error");
*/



/*#5 
        System.out.println("vuvedi Chislo m/u 100 i -100: ");
        int x = scanner.nextInt();


        if(x>=-100 && x<=100 && x!=0){
            System.out.println("YES");
        }else{
            System.out.println("No");
        }
*/

/*#6

        System.out.println("vuvedi Chislo m/u 100 i 200: ");
        int x = scanner.nextInt();


        if(x>=100 && x<=200){
            System.out.println("Valid");
        }else{
            System.out.println("Invalid");
        }
*/

/*#7 

        System.out.println("vuvedi Chislo: ");
        int x = scanner.nextInt();

        for(int i = 0; i < x; i++){
            System.out.println(i);
        }
*/


/*9 
        System.out.println("vuvedi Chislo: ");
        int x = scanner.nextInt();

        for(int i = 0; i < x; i++){
            if(x%3==0 && x%7==0){
                continue;
            }else{
                System.out.println(i);
            }
        }
*/

/*10 

        System.out.println("vuvedi Chislo: ");
        int x = scanner.nextInt();

        for(int i = 0; i < x; i++){
            if(x%5==0 && x%7==0){
                System.out.println(i);
            }
        }
*/

/*11 

        System.out.println("Kolko Chisla: ");
        int x = scanner.nextInt();
        
        int[] numbers = new numbers[x];
        for(int i = 0; i < x; i++){
            System.out.println("VUvedi Chislo: ");
            numbers[i] = scanner.nextInt();
        }


        int max = 1;
        int min = 1;
        for(int j = 0; j<x; j++){
            if(numbers[j]>max){
                max=numbers[j];
            }else if (numbers[j]<min){
                min = numbers[j];
            }
        }
        
*/
/*12 

        System.out.println("Kolko Chisla: ");
        int x = scanner.nextInt();


        int sum = 0;
        for(int i = 0; i<x ; i++){
            System.out.println("Kolko Chisla: ");
            int a = scanner.nextInt();

            sum +=a;
        }
        System.out.println(sum);

*/

/*13 


        String s = "Stop";
        while(true){
            System.out.println("Stop: ");
            String x = scanner.nextLine();

            if(x.equals(s)){
                break;

            }
        }
*/



/*14

        while(true){
            System.out.println("Chisloto da se %10: ");
            int x = scanner.nextInt();

            if(x%10==0){
                break;
            }
        }
*/

/*#15 */

        System.out.println("Chasove: ");
        int x = scanner.nextInt();

        System.out.println("Minuti: ");
        int y = scanner.nextInt();

        int a = 15;

        x*=60;

        
        System.out.println("Vremeto v minuti: " + (x + y + a)%60);
        int h = (x+y+a)/60;
        
        if(h>23){
            h=0;
            System.out.println("Vremeto v Chasove: " + h);
        }else{
            System.out.println("Vremeto v Chasove: " + h);
        }

        scanner.close();
    }

}
