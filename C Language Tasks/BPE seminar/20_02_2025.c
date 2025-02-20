#include <stdio.h>

/*int main() {
    char *words[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};
    
    for (int i = 0; i < 10; i++) {
        printf("%d - %s\n", i + 1, words[i]);
    }
    
    return 0;
}
*/

/*
int main() {
    int n = 5;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
*/

/*
int main() {
    int n;
    char symbol;
    
    printf("Enter the size of the square: ");
    scanf("%d", &n);
    printf("Enter the symbol to use: ");
    scanf(" %c", &symbol);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
    
    return 0;
}
*/
/*
int main() {
    int n;
    char symbol;
    
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);
    printf("Enter the symbol to use: ");
    scanf(" %c", &symbol);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == n - 1) {
                printf("%c ", symbol);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
*/


/*
int main() {
    float inches;
    
    printf("Enter the length in inches: ");
    scanf("%f", &inches);
    
    printf("%.2f inches is equivalent to:\n", inches);
    printf("%.2f millimeters\n", inches * 25.4);
    printf("%.2f centimeters\n", inches * 2.54);
    printf("%.2f decimeters\n", inches * 0.254);
    printf("%.2f meters\n", inches * 0.0254);
    
    return 0;
}
*/

/*
int main() {
    float celsius, fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9/5) + 32;
    
    printf("%.2f Celsius is equivalent to %.2f Fahrenheit\n", celsius, fahrenheit);
    
    return 0;
}
*/


#include<math.h>
#define M_PI 3.14159265358979323846
int main() {
    float degrees, radians;
    
    printf("Enter angle in degrees: ");
    scanf("%f", &degrees);
    
    radians = degrees * (M_PI / 180.0);
    
    printf("%.2f degrees is equivalent to %.4f radians\n", degrees, radians);
    
    return 0;
}