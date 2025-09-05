#include<stdio.h>
/*
int main(){
    for (int i = 0; i<256; i++)
    {
        printf("%i %c\n",i,i);
    } 
}
*/
/*
int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", a*b);
}
*/

/*int main()
{
    float n;
    float m;
    float kgn;
    float kgm;
    printf("Лева на килограм Зеленчуци: ");
    scanf("%f",&n);
    printf("Лева на килограм Плодове: ");
    scanf("%f",&m);
    printf("Килограми на зеленчуци: ");
    scanf("%f",&kgn);
    printf("Килограми на плодове: ");
    scanf("%f",&kgm);
    
    printf("Приходи в евро: %.2f\n", 1.95 * ((n * kgn) + (m * kgm)));
    
}
    */
/*   
int main(){
    int a;
    printf("Zadaj cqlo chislo: ");
    scanf("%d", &a);

    if (a & 1){
        printf("%d is chetno.\n", a);
    } else{
        printf("%d is nechetno.\n", a);
    }
}
*/

int main(){
    int a;
    printf("zadaj chislo");
    scanf("%d", &a);
    if (a&4)
    {
        printf("chisloto e polojitelno");
    } 
    else
    {
        printf("chisloto e negativno");
    }
}