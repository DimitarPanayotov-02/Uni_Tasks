#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793
#include <stdbool.h>

/*
int main() {
    double number, sum = 0;
    double min, max;
    int count = 0;

    printf("Enter numbers (0 to stop):\n");
    
    while (1) {
        scanf("%lf", &number);
        
        if (number == 0) {
            break;
        }
        
        if (count == 0) {
            min = max = number;
        }
        
        sum += number;
        if (number < min) {
            min = number;
        }
        if (number > max) {
            max = number;
        }
        
        count++;
    }
    
    if (count == 0) {
        printf("No numbers entered.\n");
    } else {
        printf("Arithmetic mean: %.2lf\n", sum / count);
        printf("Smallest number: %.2lf\n", min);
        printf("Largest number: %.2lf\n", max);
    }
    
    return 0;
}
*/


/*
int main() {
    int number, count = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    if (number == 0) {
        count = 1;
    } else {
        if (number < 0) {
            number = abs(number);
        }
        while (number > 0) {
            number /= 10;
            count++;
        }
    }
    
    printf("Number of digits: %d\n", count);
    
    return 0;
}
*/


/*
int main() {
    unsigned long long binary;
    unsigned long long decimal = 0, base = 1;
    char hex[20];
    int index = 0, remainder;
    
    printf("Enter a binary number: ");
    scanf("%llu", &binary);
    
    while (binary > 0) {
        remainder = binary % 10;
        if (remainder != 0 && remainder != 1) {
            printf("Invalid binary number!\n");
            return 1;
        }
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }
    
    while (decimal > 0) {
        remainder = decimal % 16;
        if (remainder < 10)
            hex[index++] = 48 + remainder;
        else
            hex[index++] = 55 + remainder;
        decimal /= 16;
    }
    
    if (index == 0) {
        printf("Hexadecimal: 0\n");
    } else {
        printf("Hexadecimal: ");
        for (int i = index - 1; i >= 0; i--) {
            printf("%c", hex[i]);
        }
        printf("\n");
    }
    
    return 0;
}
*/

/*
void square() {
    int side;
    printf("Enter the side length of the square: ");
    scanf("%d", &side);
    printf("Area: %d\n", side * side);
    printf("Perimeter: %d\n", 4 * side);
}

void triangle() {
    int a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid triangle sides!\n");
        return;
    }
    
    int perimeter = a + b + c;
    double s = perimeter / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("Area: %.2lf\n", area);
    printf("Perimeter: %d\n", perimeter);
}

void circle() {
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Area: %.2lf\n", PI * radius * radius);
    printf("Perimeter (Circumference): %.2lf\n", 2 * PI * radius);
}

int main() {
    int choice;
    do {
        printf("\nPlease, select the function:\n");
        printf("1 Square\n");
        printf("2 Triangle\n");
        printf("3 Circle\n");
        printf("0 Quit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: square(); break;
            case 2: triangle(); break;
            case 3: circle(); break;
            case 0: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Please select again.\n");
        }
    } while (choice != 0);
    
    return 0;
}
*/

/*
int main() {
    int a, b, c, d, e, temp;
    
    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if (a > b) { temp = a; a = b; b = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    if (c > d) { temp = c; c = d; d = temp; }
    if (d > e) { temp = d; d = e; e = temp; }
    
    if (a > b) { temp = a; a = b; b = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    if (c > d) { temp = c; c = d; d = temp; }
    
    if (a > b) { temp = a; a = b; b = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    
    if (a > b) { temp = a; a = b; b = temp; }
    
    printf("Sorted numbers in ascending order: %d %d %d %d %d\n", a, b, c, d, e);
    
    return 0;
}
*/

/*
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci sequence up to %d terms: ", n);
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
    
    return 0;
}
*/

/*
int main() {
    int a, b, c, d, e, newNumber;
    int found = 0;
    
    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    printf("Enter a new number: ");
    scanf("%d", &newNumber);

    if (newNumber == a || newNumber == b || newNumber == c || newNumber == d || newNumber == e) {
        found = 1;
    }
    
    if (found) {
        printf("Found\n");
    } else {
        printf("NOT FOUND\n");
    }
    
    return 0;
}
*/

/*
int main() {
    int numbers[5];
    int i, j, temp;

    printf("Enter 5 unique integers in ascending order:\n");

    for (i = 0; i < 5; i++) {
        while (1) {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &numbers[i]);

            int is_unique = 1;
            for (j = 0; j < i; j++) {
                if (numbers[i] == numbers[j]) {
                    is_unique = 0;
                    break;
                }
            }

            if (i > 0 && numbers[i] <= numbers[i - 1]) {
                printf("Number must be greater than the previous one!\n");
            } else if (!is_unique) {
                printf("Number is not unique, try again.\n");
            } else {
                break;
            }
        }
    }

    printf("\nThe numbers in descending order are:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
*/

/*
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int sumOfPrimes(int n) {
    int sum = 0;
    
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    
    return sum;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = sumOfPrimes(n);
    printf("The sum of all prime numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}
*/


/*
void printNumbers(int num1, int num2, int num3, int num4) {
    printf("Entered numbers: %d %d %d %d\n", num1, num2, num3, num4);
}

void swapNumbers(int *num1, int *num2, int *num3, int *num4) {

    int temp;
    
    temp = *num1;
    *num1 = *num4;
    *num4 = temp;
    
    temp = *num2;
    *num2 = *num3;
    *num3 = temp;
}

int main() {
    int num1, num2, num3, num4;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    printNumbers(num1, num2, num3, num4);

    swapNumbers(&num1, &num2, &num3, &num4);

    printf("After swapping:\n");
    printNumbers(num1, num2, num3, num4);

    return 0;
}
*/