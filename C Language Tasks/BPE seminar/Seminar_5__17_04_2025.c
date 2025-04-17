#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int guests;
    
    printf("Enter the number of guests: ");
    scanf("%d", &guests);
    
    const double PRICE_CHAIR = 13.99;
    const double PRICE_TABLE = 42.00;
    const double PRICE_CUPS = 5.98;
    const double PRICE_DISHES = 21.02;

    int chairs = 0, tables = 0, cups = 0, dishes = 0;
    double total_spent = 0.0;

    char item[20];
    printf("Start entering purchased items one by one (Chair, Table, Cups, Dishes).\n");
    printf("Type 'PARTY!' when done:\n");

    while (1) {
        printf("> ");
        scanf("%s", item);
        if (strcmp(item, "PARTY!") == 0) break;

        if (strcmp(item, "Chair") == 0) {
            chairs++;
            total_spent += PRICE_CHAIR;
        } else if (strcmp(item, "Table") == 0) {
            tables++;
            total_spent += PRICE_TABLE;
        } else if (strcmp(item, "Cups") == 0) {
            cups++;
            total_spent += PRICE_CUPS;
        } else if (strcmp(item, "Dishes") == 0) {
            dishes++;
            total_spent += PRICE_DISHES;
        } else {
            printf("Invalid item. Please enter Chair, Table, Cups, or Dishes.\n");
        }
    }

    int needed_chairs = guests - chairs;
    int needed_tables = (int)ceil((double)guests / 8.0) - tables;
    int needed_cups = (int)ceil((double)guests / 6.0) - cups;
    int needed_dishes = (int)ceil((double)guests / 6.0) - dishes;

    if (needed_chairs < 0) needed_chairs = 0;
    if (needed_tables < 0) needed_tables = 0;
    if (needed_cups < 0) needed_cups = 0;
    if (needed_dishes < 0) needed_dishes = 0;

    printf("\nTotal spent so far: %.2f\n", total_spent);
    printf("Still needed:\n");
    if (needed_tables > 0) printf("- %d Table(s)\n", needed_tables);
    if (needed_chairs > 0) printf("- %d Chair(s)\n", needed_chairs);
    if (needed_dishes > 0) printf("- %d Dishes set(s)\n", needed_dishes);
    if (needed_tables == 0 && needed_chairs == 0 && needed_dishes == 0)
        printf("All necessary items are already purchased!\n");

    return 0;
}