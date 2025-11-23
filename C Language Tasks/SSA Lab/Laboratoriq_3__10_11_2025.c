#include <stdio.h>
#include <stdlib.h>

/*зад лаб 4, 33, (46), 48 */
/*
#define N 8

int coins[N] = {200,100,50,20,10,5,2,1};

int greedyCoins(int amount, int i){
    if(amount == 0 || i >= N){
        return 0;
    }

    if(coins[i] > amount){
        return greedyCoins(amount, i + 1);
    }else{ 
        return 1 + greedyCoins(amount - coins[i], i);
    }

}

int main() {
    int amount;
    printf("Въведете сума (в стотинки): ");
    scanf("%d", &amount);

    int result = greedyCoins(amount, 0);
    printf("Минимален брой монети: %d\n", result);

    return 0;
}
*/