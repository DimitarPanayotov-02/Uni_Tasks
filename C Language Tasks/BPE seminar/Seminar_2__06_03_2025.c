#include <stdio.h>



//1
/*
double max(double a, double b) {
    return (a > b) ? a : b;
}

double min(double a, double b) {
    return (a < b) ? a : b;
}

int main() {
    double num, largest = -1e9, smallest = 1e9;
    
    printf("Enter numbers (0 to stop):\n");
    
    while (1) {
        scanf("%lf", &num);
        if (num == 0) break;
        
        largest = max(largest, num);
        smallest = min(smallest, num);
    }
    
    if (largest == -1e9 && smallest == 1e9) {
        printf("No numbers were entered.\n");
    } else {
        printf("Largest number entered: %.2f\n", largest);
        printf("Smallest number entered: %.2f\n", smallest);
    }

    return 0;
}
*/

//2
/*
int main() {
    int hours, minutes;
    printf("Enter hours (0-23) and minutes (0-59): ");
    scanf("%d %d", &hours, &minutes);
    
    minutes += 15;
    
    if (minutes >= 60) {
        minutes -= 60;
        hours = (hours + 1) % 24;
    }
    
    printf("%d:%02d\n", hours, minutes);
    
    return 0;
}
*/

//3
/*
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Check if all three numbers are the same
    if (a == b && b == c) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
*/

//4
/*
int main() {
    int points;
    printf("Enter the number of points: ");
    scanf("%d", &points);
    
    double bonus = 0;
    
    if (points <= 100) {
        bonus = 5;
    } else if (points > 1000) {
        bonus = points * 0.10;
    } else {
        bonus = points * 0.20;
    }
    
    if (points % 2 == 0) {
        bonus += 1;
    }
    if (points % 10 == 5) {
        bonus += 2;
    }
    
    double total_points = points + bonus;
    
    printf("Bonus points: %.2f\n", bonus);
    printf("Total points: %.2f\n", total_points);
    
    return 0;
}
*/

//5
/*
int main() {
    int time1, time2, time3;
    int total_seconds, minutes, seconds;

    printf("Enter the time of athlete 1 in seconds: ");
    scanf("%d", &time1);
    
    printf("Enter the time of athlete 2 in seconds: ");
    scanf("%d", &time2);
    
    printf("Enter the time of athlete 3 in seconds: ");
    scanf("%d", &time3);

    total_seconds = time1 + time2 + time3;

    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("Total time: %d:%02d\n", minutes, seconds);

    return 0;
}
*/

//6
/*
int main() {
    float x1, y1, x2, y2, x, y;

    printf("Enter the coordinates of the bottom-left corner of the rectangle (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of the top-right corner of the rectangle (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter the coordinates of the point (x, y): ");
    scanf("%f %f", &x, &y);

    if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
        printf("Inside\n");
    } else {
        printf("Outside\n");
    }

    return 0;
}
*/

//7
/*
int main() {
    float n, taxi_price, bus_price, train_price;
    char period;

    printf("Enter the number of kilometers: ");
    scanf("%f", &n);
    
    printf("Enter the period of the day (D for day, N for night): ");
    scanf(" %c", &period);

    if (period == 'D') {
        taxi_price = 0.70 + n * 0.79;
    } else if (period == 'N') {
        taxi_price = 0.70 + n * 0.90;
    }

    if (n >= 20) {
        bus_price = n * 0.09;
    } else {
        bus_price = -1;
    }

    if (n >= 100) {
        train_price = n * 0.06;
    } else {
        train_price = -1;
    }

    float cheapest_price = taxi_price;

    if (bus_price != -1 && bus_price < cheapest_price) {
        cheapest_price = bus_price;
    }

    if (train_price != -1 && train_price < cheapest_price) {
        cheapest_price = train_price;
    }

    printf("The cheapest price is: %.2f BGN\n", cheapest_price);

    return 0;
}
*/


//8
/*
int main() {
    double V, pipe1_rate, pipe2_rate;
    int N;
    
    printf("Enter the volume of the pool in cubic meters: ");
    scanf("%lf", &V);
    
    printf("Enter the flow rate of pipe 1 in liters per hour: ");
    scanf("%lf", &pipe1_rate);
    
    printf("Enter the flow rate of pipe 2 in liters per hour: ");
    scanf("%lf", &pipe2_rate);
    
    printf("Enter the number of hours the pipes are running: ");
    scanf("%d", &N);
    
    double pool_volume_in_liters = V * 1000;
    
    double total_flow = pipe1_rate + pipe2_rate;
    
    double total_water_filled = total_flow * N;
    
    if (total_water_filled >= pool_volume_in_liters) {
        printf("The pool is full.\n");
    } else {
        printf("The pool is partially filled with %.2f liters of water.\n", total_water_filled);
    }
    
    return 0;
}
*/


//9
/*
int main() {
    double X, Y, Z;
    int workers;
    
    printf("Enter the area of the vineyard in square meters (X): ");
    scanf("%lf", &X);
    
    printf("Enter the number of kilograms of grapes obtained per square meter (Y): ");
    scanf("%lf", &Y);
    
    printf("Enter the desired quantity of wine in liters (Z): ");
    scanf("%lf", &Z);
    
    printf("Enter the number of workers: ");
    scanf("%d", &workers);
    
    double total_grapes = X * Y;
    
    double grapes_for_wine = total_grapes * 0.40;
    
    double wine_produced = grapes_for_wine / 2.5;
    
    if (wine_produced >= Z) {
        printf("The wine production is sufficient.\n");
        
        double remaining_wine = wine_produced - Z;
        
        if (workers > 0) {
            double wine_per_worker = remaining_wine / workers;
            printf("Each worker gets %.2f liters of remaining wine.\n", wine_per_worker);
        }
        
    } else {
        printf("The wine production is insufficient. Only %.2f liters can be produced.\n", wine_produced);
    }
    
    return 0;
}
*/

//10
/*
int main() {
    int n;
    scanf("%d", &n);

    int count_p1 = 0, count_p2 = 0, count_p3 = 0, count_p4 = 0, count_p5 = 0;

    for (int i = 1; i <= n; i++) {
        if (i < 200) {
            count_p1++;
        } else if (i >= 200 && i <= 399) {
            count_p2++;
        } else if (i >= 400 && i <= 599) {
            count_p3++;
        } else if (i >= 600 && i <= 799) {
            count_p4++;
        } else {
            count_p5++;
        }
    }

    printf("p1: %.2f%%\n", (count_p1 * 100.0) / n);
    printf("p2: %.2f%%\n", (count_p2 * 100.0) / n);
    printf("p3: %.2f%%\n", (count_p3 * 100.0) / n);
    printf("p4: %.2f%%\n", (count_p4 * 100.0) / n);
    printf("p5: %.2f%%\n", (count_p5 * 100.0) / n);

    return 0;
}
*/

//11
/*
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n / 2; i++) {
        printf("^");
    }
    printf("/");
    for (int i = 0; i < n / 2; i++) {
        printf("^");
    }
    printf("\\\n");

    for (int i = 0; i < n - 2; i++) {
        printf("|");
        for (int j = 0; j < 2 * n - 2; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    printf("\\");
    for (int i = 0; i < n / 2; i++) {
        printf("_");
    }
    printf("/");
    for (int i = 0; i < n / 2; i++) {
        printf("_");
    }
    printf("\\\n");

    return 0;
}
*/


//12
/*
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\\");
        
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            printf(" ");
        }
        
        printf("/");
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= n - 1; i++) {
        printf(" ");
    }
    printf(" @\n");

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("/");

        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            printf(" ");
        }

        printf("\\");
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/