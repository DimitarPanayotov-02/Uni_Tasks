#include <stdio.h>
#include <math.h>
#include <string.h>

//1
/*
void sort(int* a, int* b, int* c, int* d, int* e) {
    int temp;
    
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*a > *c) { temp = *a; *a = *c; *c = temp; }
    if (*a > *d) { temp = *a; *a = *d; *d = temp; }
    if (*a > *e) { temp = *a; *a = *e; *e = temp; }
    
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
    if (*b > *d) { temp = *b; *b = *d; *d = temp; }
    if (*b > *e) { temp = *b; *b = *e; *e = temp; }
    
    if (*c > *d) { temp = *c; *c = *d; *d = temp; }
    if (*c > *e) { temp = *c; *c = *e; *e = temp; }
    
    if (*d > *e) { temp = *d; *d = *e; *e = temp; }
}

int main() {
    int num1, num2, num3, num4, num5;
    
    printf("Въведете 5 цели числа: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    sort(&num1, &num2, &num3, &num4, &num5);
    
    printf("Числата в нарастващ ред: %d %d %d %d %d\n", num1, num2, num3, num4, num5);
    
    return 0;
}
*/

//2
/*
const char *exists_msg = "This Value Already Exist";
const char *unique_msg = "This Value is unique for now";

void swap(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

void sortPointers(int *p1, int *p2, int *p3, int *p4, int *p5) {
    int *ptrs[5] = {p1, p2, p3, p4, p5};
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (*ptrs[j] > *ptrs[j + 1]) {
                swap(&ptrs[j], &ptrs[j + 1]);
            }
        }
    }
    
    printf("Sorted numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptrs[i]);
    }
    printf("\n");
}

const char* checkValue(int num, int *p1, int *p2, int *p3, int *p4, int *p5) {
    if (num == *p1 || num == *p2 || num == *p3 || num == *p4 || num == *p5) {
        return exists_msg;
    }
    return unique_msg;
}

int main() {
    int a, b, c, d, e, new_num;
    
    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    sortPointers(&a, &b, &c, &d, &e);
    
    printf("Enter a new number: ");
    scanf("%d", &new_num);
    
    printf("%s\n", checkValue(new_num, &a, &b, &c, &d, &e));
    
    return 0;
}
*/

//3
/*
void swap(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

void sortPointers(int *ptrs[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*ptrs[j] > *ptrs[j + 1]) {
                swap(&ptrs[j], &ptrs[j + 1]);
            }
        }
    }
}

int main() {
    int a, b, c, d, e, new_num;
    int *ptrs[5] = {&a, &b, &c, &d, &e};
    
    printf("Enter five unique integers in ascending order: ");
    for (int i = 0; i < 5; i++) {
        int temp;
        while (1) {
            scanf("%d", &temp);
            if (i == 0 || temp > *ptrs[i - 1]) {
                *ptrs[i] = temp;
                break;
            } else {
                printf("Invalid input. Enter a number greater than %d: ", *ptrs[i - 1]);
            }
        }
    }
    
    printf("Enter a new number: ");
    scanf("%d", &new_num);
    
    int *new_ptrs[6] = {&a, &b, &c, &d, &e, &new_num};
    sortPointers(new_ptrs, 6);
    
    printf("Updated sorted numbers: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *new_ptrs[i]);
    }
    printf("\n");
    
    return 0;
}
*/

//4
/*
void printNumbers(int a, int b, int c, int d) {
    printf("Numbers: %d %d %d %d\n", a, b, c, d);
}

void swapValues(int *a, int *b, int *c, int *d) {
    int temp;
    
    temp = *a;
    *a = *d;
    *d = temp;
    
    temp = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int a, b, c, d;
    
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    printNumbers(a, b, c, d);
    
    swapValues(&a, &b, &c, &d);
    
    printNumbers(a, b, c, d);
    
    return 0;
}
*/

//5
/*
void byValue(int x, int y) {
    printf("Sum before function (by value): %d\n", x + y);
    x *= 5;
    y -= 10;
    printf("Sum inside function (by value): %d\n", x + y);
}

void byReference(int *x, int *y) {
    printf("Sum before function (by reference): %d\n", *x + *y);
    *x *= 5;
    *y -= 10;
    printf("Sum inside function (by reference): %d\n", *x + *y);
}

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\nDemonstrating pass by value:\n");
    byValue(a, b);
    printf("Sum after function (by value): %d\n", a + b);
    
    printf("\nDemonstrating pass by reference:\n");
    byReference(&a, &b);
    printf("Sum after function (by reference): %d\n", a + b);
    
    return 0;
}
*/

//6
/*
int Add(int a, int b) {
    return a + b;
}

int Subtract(int a, int b) {
    return a - b;
}

int Power(int a, int b) {
    return (int)pow(a, b);
}

int main() {
    int a, b, choice;
    int (*operation)(int, int);
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Power\n");
        printf("4. Exit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                operation = Add;
                break;
            case 2:
                operation = Subtract;
                break;
            case 3:
                operation = Power;
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
                continue;
        }
        
        printf("Result: %d\n", operation(a, b));
    }
    
    return 0;
}
*/

//7
/*
#define MAX_LEN 256

int compareStrings(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 < *str2)
            return -1;
        if (*str1 > *str2)
            return 1;
        str1++;
        str2++;
    }
    return (*str1 == *str2) ? 0 : (*str1 ? 1 : -1);
}

int main() {
    char str1[MAX_LEN], str2[MAX_LEN];
    
    printf("Enter first string: ");
    fgets(str1, MAX_LEN, stdin);
    printf("Enter second string: ");
    fgets(str2, MAX_LEN, stdin);
    
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;
    
    int result = compareStrings(str1, str2);
    printf("Comparison result: %d\n", result);
    
    return 0;
}
*/

//8
/*
#define ROWS 3
#define COLS 3

void inputMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", (matrix + i * cols + j));
        }
    }
}

void addMatrices(int *matrix1, int *matrix2, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(matrix1 + i * cols + j) + *(matrix2 + i * cols + j);
        }
    }
}

void printMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];
    
    printf("Enter elements for first matrix:\n");
    inputMatrix((int *)matrix1, ROWS, COLS);
    
    printf("Enter elements for second matrix:\n");
    inputMatrix((int *)matrix2, ROWS, COLS);
    
    addMatrices((int *)matrix1, (int *)matrix2, (int *)result, ROWS, COLS);
    
    printf("Resultant Matrix:\n");
    printMatrix((int *)result, ROWS, COLS);
    
    return 0;
}
*/

//9

/*
19
printf("%d", *(int *)ptr);
*/

//10
/*
int main() {
    char str[100];
    char *ptr = str;

    printf("Въведете низ: ");
    fgets(str, sizeof(str), stdin);

    while (*ptr != '\0') {
        if (*ptr == '\n') {
            *ptr = '\0';
            break;
        }
        ptr++;
    }

    int length = 0;
    ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Дължината на низа е: %d\n", length);

    return 0;
}
*/