#include <stdio.h>

/*
int main() {
    int num1, num2, sum = 0;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    for (int i = num1 + 1; i < num2; i++) {
        sum += i;
    }

    printf("The sum of numbers between %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}
*/

/*
int main() {
    int num, sum = 0;
    
    printf("Enter numbers to sum (enter 0 to exit):\n");
    
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if (num == 0) {
            break;
        }
        
        sum += num;
    }
    
    printf("The total sum is: %d\n", sum);
    
    return 0;
}
*/

/*
int main() {
    int num1, num2, sum_even = 0, product_odd = 1;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    for (int i = num1 + 1; i < num2; i++) {
        if (i % 2 == 0) {
            sum_even += i;
        } else {
            product_odd *= i;
        }
    }
    
    printf("The sum of even numbers between %d and %d is: %d\n", num1, num2, sum_even);
    printf("The product of odd numbers between %d and %d is: %d\n", num1, num2, product_odd);
    
    return 0;
}
*/

/*
int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;
    
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    
    printf("The decimal equivalent is: %d\n", decimal);
    
    return 0;
}
*/


/*
void decToBin(int decimal) {
    int binary[32], i = 0;
    
    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return;
    }
    
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int binToDec(long long binary) {
    int decimal = 0, base = 1, remainder;
    
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    
    return decimal;
}

int main() {
    int choice;
    
    while (1) {
        printf("Please, select the function:\n");
        printf("1 Dec To Bin\n");
        printf("2 Bin To Dec\n");
        printf("0 Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 0) {
            printf("Exiting program.\n");
            break;
        }
        
        if (choice == 1) {
            int decimal;
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            decToBin(decimal);
        } else if (choice == 2) {
            long long binary;
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            printf("Decimal equivalent: %d\n", binToDec(binary));
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}
*/

/*
int main() {
    int num, first_digit, last_digit, sum;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    last_digit = num % 10;
    
    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }
    
    sum = first_digit + last_digit;
    
    printf("Sum of first and last digits: %d\n", sum);
    
    return 0;
}
*/

/*
int main() {
    int n, first = 0, second = 1, next;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci sequence up to %d terms:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    
    printf("\n");
    return 0;
}
*/


/*
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("The Highest Common Multiple (HCM) of %d and %d is: %d\n", num1, num2, lcm(num1, num2));
    
    return 0;
}
*/


/*
int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int num = n - (i < n ? i : (2 * n - 2 - i));
            num = num < (n - (j < n ? j : (2 * n - 2 - j))) ? num : (n - (j < n ? j : (2 * n - 2 - j)));
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}
*/