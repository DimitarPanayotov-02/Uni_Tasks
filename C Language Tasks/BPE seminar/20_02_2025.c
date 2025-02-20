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

/*
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
*/


/*
#define USD_RATE 0.55
#define EUR_RATE 0.51
#define GBP_RATE 0.44

void convert_currency(double leva) {
    double dollars = leva * USD_RATE;
    double euros = leva * EUR_RATE;
    double pounds = leva * GBP_RATE;

    printf("%.2f BGN is equivalent to:\n", leva);
    printf("%.2f USD\n", dollars);
    printf("%.2f EUR\n", euros);
    printf("%.2f GBP\n", pounds);
}

int main() {
    double leva;
    printf("Enter amount in Bulgarian Lev (BGN): ");
    scanf("%lf", &leva);

    if (leva < 0) {
        printf("Invalid input! Amount must be non-negative.\n");
        return 1;
    }
    
    convert_currency(leva);
    return 0;
}

*/

/*
double calculate_trapezoid_area(double base1, double base2, double height) {
    return 0.5 * (base1 + base2) * height;
}

int main() {
    double base1, base2, height, area;

    printf("Enter the length of the first base: ");
    scanf("%lf", &base1);
    
    printf("Enter the length of the second base: ");
    scanf("%lf", &base2);
    
    printf("Enter the height of the trapezoid: ");
    scanf("%lf", &height);
    
    if (base1 <= 0 || base2 <= 0 || height <= 0) {
        printf("Invalid input! All values must be positive.\n");
        return 1;
    }
    
    area = calculate_trapezoid_area(base1, base2, height);
    
    printf("The area of the trapezoid is: %.2f\n", area);
    
    return 0;
}

*/