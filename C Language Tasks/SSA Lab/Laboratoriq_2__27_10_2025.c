#include <stdio.h>
#include <stdlib.h>

/*Daden e dvumeren masiv s celi elementi celi chisla
da se sustavi ednomeren masiv s elementi naj golemi obshti deliteli na vseki 2 elementa
uchastvashti w dwojki ot elementi simetrichni sprqmi glavniq diagonal na dvumereniq masiv*/


/*да се състави рекурсивна функция която повдига на степен цяло или нецяло число
а степента е цяло число, при следните 3 случая на n (степента)
1.Ако n = 0 функцията връща 1
2. n>0 ако х е основа се изчислява като x*x на n-1 степен
3, Ako n<0 1/x на степен (-n) */


/*#1
int NOD(int a, int b){
    if (b==0)
        return a>0?a:-a;
    return NOD(b, a%b);
}

int main(){
    int n = 3,m = 3;
    int Array2d[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    int array[n*m];
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < m; j++) {
            array[k++] = NOD(Array2d[i][j], Array2d[j][i]);
        }
    }

    // Извеждане на резултатите
    printf("Ednomeren masiv:\n");
    for (int i = 0; i < k; i++)
        printf("%d ", array[i]);
    
    return 0;
}
*/

/*#2

double power(int x, int n){
    if(n == 0){
        return 1;
    }else if (n > 0) {
        return x * power(x, n-1);
    }else{
        return 1 / power(x, -n);
    }

}

int main(){
    double x = 2;
    int n = -2;
    printf("%.2lf ^ %d = %.2lf\n", x,n,power(x,n));
    
    return 0;
}
*/