package Java_Language_Tasks.PNPE_Sem.Sem_Upr_2;

import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;


public class Zadachi2 {
    
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
/*#1       
        int array[] = new int[10];

        for(int i = 1 ; i<10 ; i++){
            array[i] = i;
        }
        for(int i = 0 ; i<10 ; i++){
            System.out.println(array[i]);
        }
*/


/*#2 

        int array[] = new int[5];
        int suma = 0;
        for(int i = 0; i<5; i++){
            System.out.println("Napishi 5 chisla");

            array[i] = scanner.nextInt();
            suma += array[i];
        }

        float average = suma / 5;
        System.out.println(average);
*/


/*#3 

        int max = 0;
        int array[] = {1,2,3,4};

        for(int i = 0 ; i < array.length; i++){
            if(max<array[i]){
                max = array[i];
            }
        }
        System.out.println(max);
*/



/*#4 

        int array[] = {1,2,3,4,5,6,7,8,9,10};
        int sum = 0;
        System.out.println("kolko shisla");
        int n = scanner.nextInt();
        for(int i =0; i< n; i++){
            sum += array[i];
        }
        System.out.println(sum);

*/

/*#5 

        String[] words = {"aa", "aaa", "aaaaaa", "aaaa"};
        Arrays.sort(words, Comparator.comparingInt(String::length));

        for (int i = 0; i < words.length; i++) {
            System.out.println(words[i]);
        }
*/

/*#6 


        int array[] = {1,2,3,4,5,6,7};
        System.out.println("koe chislo");
        int a = scanner.nextInt();
        for(int i = 0; i < array.length; i++){
            if(array[i]==a){
                System.out.println("Namerern");
            }
        }

*/

/*#7 

        int array[] = {1,2,-3,-4,-5,6,7};
        int poloj = 0;
        int otri = 0;

        for(int i =0;i< array.length;i++){
            if(array[i]>0){
                poloj++;
            }else{
                otri++;
            }
        }
        System.out.println("polojitelni: " + poloj);
        System.out.println("Otricatelni: " + otri);
*/

/*#8 

        int[] arr1 = {1, 2, 3, 4, 5, 6};
        int[] arr2 = {4, 5, 6, 7, 8, 9};

        for (int i = 0; i < arr1.length; i++) {
            for (int j = 0; j < arr2.length; j++) {
                if (arr1[i] == arr2[j]) {
                    System.out.print(arr1[i] + " ");
                    
                }
            }
        }
*/


/*#9 

        int numbers[] = {1,2,3,4};

        for (int i = 0; i < numbers.length / 2; i++) {
            int temp = numbers[i];
            numbers[i] = numbers[numbers.length - 1 - i];
            numbers[numbers.length - 1 - i] = temp;
        }
*/


/*#10 */


        System.out.print("Въведете числото, което искате да премахнете: ");
        int target = scanner.nextInt();
        
        int numbers[] = {1,2,3,4,5,6};
        int newArray[] = {};
        for (int i = 0 ; i<numbers.length; i++) {
            if (numbers[i] != target) {
                int j = 0;
                newArray[j] = numbers[i];
                j++;
            }
        }

        

    }
}
