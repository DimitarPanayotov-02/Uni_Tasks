#include <stdio.h>
#include <stdlib.h>


/*daden e ednomeren masiv ot celi chisla, 
purviq element na wtoriq masiv e naj golemiq element ot purwiq, 
posledniq - broq na nechetnote ot purviq  , 
otricatelnite elementi po stojnost ot purviq masiv*/

/*16,46*/

int findMax(int arr1[],int n){
    int max = arr1[0];
    for(int i=1; i < n ; i++){
        if (arr1[i]>max){
            max = arr1[i];
        }
    }
    return max;
}

int countOdd(int arr1[],int n){
    int count=0;
    for(int i = 0; i < n; i++){
        if(arr1[i] %2  !=0){
            count++;
        }
    }
    return count;
}

void fillSecondArr(int arr1[],int arr2[], int n){
    arr2[0] = findMax(arr1,n);

    for (int i =0; i < n; i++){
        arr2[i] = -arr1[i];
    }

    arr2[n-1] = countOdd(arr1,n);
}

int main(){

    int arr1[7] = {1,2,3,4,5,6,7};
    int arr2[7];
    int n = 7;

    fillSecondArr(arr1,arr2,n);

    printf("\npurvi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\n\nvtori:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}


/*даден е двумерен масив с цели числа,да се създаде втрия едномерен масив на базата на първия по следния на1чин, 
елементите на едномерния масив представляват елементите от двата диагонала от двумерния масив но не всички,
а само тези които са по голлеми от 10 */