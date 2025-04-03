#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//1
/*
#define N 3
#define M 3

bool checkRows(int arr[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M - 1; j++) {
            if (arr[i][j] > arr[i][j + 1]) {
                return false;
            }
        }
    }
    return true;
}

bool checkColumns(int arr[N][M]) {
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N - 1; i++) {
            if (arr[i][j] < arr[i + 1][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[N][M] = {
        {1, 2, 3},
        {3, 4, 5},
        {2, 5, 6}
    };
    
    if (checkRows(matrix)) {
        printf("Each row is sorted in ascending order.\n");
    } else {
        printf("Rows are NOT sorted in ascending order.\n");
    }

    if (checkColumns(matrix)) {
        printf("Each column is sorted in descending order.\n");
    } else {
        printf("Columns are NOT sorted in descending order.\n");
    }
    
    return 0;
}
*/

//2
/**/

//3
/*
#define N 3
#define M 3

int findMaxRow(int arr[N][M]) {
    int maxRow = 0, maxVal = arr[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
                maxRow = i;
            }
        }
    }
    return maxRow;
}

int findMinRow(int arr[N][M]) {
    int minRow = 0, minVal = arr[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
                minRow = i;
            }
        }
    }
    return minRow;
}

void swapRows(int arr[N][M], int row1, int row2) {
    for (int j = 0; j < M; j++) {
        int temp = arr[row1][j];
        arr[row1][j] = arr[row2][j];
        arr[row2][j] = temp;
    }
}

void printMatrix(int arr[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][M] = {
        {1, 2, 3},
        {9, 8, 7},
        {4, 5, 6}
    };
    
    printf("Original Matrix:\n");
    printMatrix(matrix);
    
    int maxRow = findMaxRow(matrix);
    int minRow = findMinRow(matrix);
    
    swapRows(matrix, maxRow, minRow);
    
    printf("Matrix after swapping rows with largest and smallest elements:\n");
    printMatrix(matrix);
    
    return 0;
}
*/

//4
/**/

//5
/*
#define MAX_SIZE 10000

int arr[MAX_SIZE];
int size = 0;

void add(int x) {
    arr[size++] = x;
}

void delete(int x) {
    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != x) {
            arr[newSize++] = arr[i];
        }
    }
    size = newSize;
}

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void smallest(int x) {
    if (x > size || x < 1) {
        printf("Invalid query\n");
        return;
    }
    int temp[MAX_SIZE];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    qsort(temp, size, sizeof(int), (int (*)(const void *, const void *))cmp);
    printf("%d\n", temp[x - 1]);
}



int main() {
    int choice, x;
    while (1) {
        printf("1: add(x), 2: delete(x), 3: smallest(x), 4: exit\n");
        scanf("%d", &choice);
        if (choice == 4) break;
        scanf("%d", &x);
        if (choice == 1) add(x);
        else if (choice == 2) delete(x);
        else if (choice == 3) smallest(x);
    }
    return 0;
}
*/

//6
/*
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));
    int *primes = (int *)malloc(n * sizeof(int));
    int primeCount = 0, nonPrimeCount = 0;
    
    if (!arr || !primes) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primes[primeCount++] = arr[i];
        } else {
            arr[nonPrimeCount++] = arr[i];
        }
    }
    
    printf("Array without primes: ");
    for (int i = 0; i < nonPrimeCount; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Prime numbers array: ");
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");
    
    free(arr);
    free(primes);
    
    return 0;
}
*/

//7
/**/

//8
/*
int main() {
    int *arr = (int *)malloc(10 * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    int n = 10;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index, num;
    while (1) {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        if (num == 0) break;
        
        printf("Enter the index: ");
        scanf("%d", &index);

        if (index < 0 || index >= n) {
            printf("Invalid index!\n");
            continue;
        }

        arr = (int *)realloc(arr, (n + 1) * sizeof(int));
        if (!arr) {
            printf("Memory reallocation failed!\n");
            return 1;
        }

        for (int i = n; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        arr[index] = num;
        n++;
    }

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
*/

/*buble sortt; quick sort*/