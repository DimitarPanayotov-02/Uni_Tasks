#include <stdio.h>

//1

int main() {
    char *words[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};
    
    for (int i = 0; i < 10; i++) {
        printf("%d - %s\n", i + 1, words[i]);
    }
    
    return 0;
}



//2
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


//3
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


//4
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


//5
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


//6
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


//7
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


//8
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


//9
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


//10
/*
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main() {
    double degrees, radians;
    printf("Enter the angle in degrees: ");
    scanf("%lf", &degrees);

    radians = degrees * (M_PI / 180.0);

    double sine = sin(radians);
    double cosine = cos(radians);
    double tangent = tan(radians);
    double cotangent;
    
    if (tangent != 0) {
        cotangent = 1.0 / tangent;
    } else {
        cotangent = NAN; // Undefined case
    }

    printf("sin(%.2f) = %.6f\n", degrees, sine);
    printf("cos(%.2f) = %.6f\n", degrees, cosine);
    printf("tan(%.2f) = %s\n", degrees, (cosine != 0) ? "%.6f" : "undefined");
    printf("cot(%.2f) = %s\n", degrees, (tangent != 0) ? "%.6f" : "undefined");

    return 0;
}
*/


//11
/*
#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    printf("Enter the coordinates of point A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of point B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    double length = fabs(x2 - x1);
    double width = fabs(y2 - y1);
    double area = length * width;

    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
*/


//12
/*
#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of point A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of point B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the coordinates of point C (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    double area = fabs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);

    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
*/



//13
/*
#include <stdio.h>
#include <math.h>

int main() {
    double w, h;
    printf("Enter the width and height of the classroom (meters): ");
    scanf("%lf %lf", &w, &h);

    w *= 100;
    h *= 100;

    double desk_width = 70;
    double desk_height = 120;
    double corridor_width = 100;

    double available_width = w - corridor_width;

    double left_side_width = available_width / 2.0;
    double right_side_width = available_width / 2.0;

    int rows = (int)(h / desk_height);
    int left_cols = (int)(left_side_width / desk_width);
    int right_cols = (int)(right_side_width / desk_width);

    int total_workplaces = (rows * (left_cols + right_cols)) - 3;

    printf("Total workplaces: %d\n", total_workplaces);

    return 0;
}
*/


//14
/*
int main()
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


//15
/*
#include <stdio.h>
#include <math.h>

int main() {
    double N, W, L, M, O;
    printf("Enter the side of the square site (N meters): ");
    scanf("%lf", &N);
    printf("Enter the width and length of a tile (W L meters): ");
    scanf("%lf %lf", &W, &L);
    printf("Enter the width and length of the bench (M O meters): ");
    scanf("%lf %lf", &M, &O);

    double site_area = N * N;
    
    double bench_area = M * O;
    
    double area_to_tile = site_area - bench_area;
    
    double tile_area = W * L;
    
    int tiles_needed = (int)ceil(area_to_tile / tile_area);
    
    double time_required = tiles_needed * 0.2;
    
    printf("Number of tiles needed: %d\n", tiles_needed);
    printf("Time required to place all tiles: %.2f minutes\n", time_required);

    return 0;
}
*/


//16
/*
#include <stdio.h>

int main() {
    double N, M, exchange_rate;
    printf("Enter the number of working days per month: ");
    scanf("%lf", &N);
    printf("Enter the daily earnings in dollars: ");
    scanf("%lf", &M);
    printf("Enter the exchange rate (dollar to leva): ");
    scanf("%lf", &exchange_rate);

    double monthly_salary = N * M;
    
    double yearly_salary = (monthly_salary * 12) + (2.5 * monthly_salary);
    
    double net_yearly_salary = yearly_salary * 0.75;
    
    double net_yearly_salary_leva = net_yearly_salary * exchange_rate;
    
    double average_daily_profit = net_yearly_salary_leva / 365.0;
    
    printf("Average daily net profit in leva: %.2f\n", average_daily_profit);

    return 0;
}
*/