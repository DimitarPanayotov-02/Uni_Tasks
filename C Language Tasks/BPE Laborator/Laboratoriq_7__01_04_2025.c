#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLIGHT_NUMBER 10
#define MAX_PASSENGERS 256
#define MIN_FLIGHTS 10
#define MAX_FLIGHTS 50

typedef struct {
    char name[50];
    char status[20];
} Passenger;

typedef struct {
    char flightNumber[MAX_FLIGHT_NUMBER];
    char status[20];
    Passenger* passengers;
    int passengerCount;
} Flight;

Flight* flights;
int flightCount = 0;

int findFlightByNumber(char* flightNumber) {
    for (int i = 0; i < flightCount; i++) {
        if (strcmp(flights[i].flightNumber, flightNumber) == 0) {
            return i;
        }
    }
    return -1;
}

void printFlights() {
    printf("\n№ | Flight Number | Status\n");
    for (int i = 0; i < flightCount; i++) {
        printf("%d | %s | %s\n", i + 1, flights[i].flightNumber, flights[i].status);
    }
}

void addFlight() {
    if (flightCount >= MAX_FLIGHTS) {
        printf("Max flights reached.\n");
        return;
    }
    flights[flightCount].passengers = malloc(MAX_PASSENGERS * sizeof(Passenger));
    printf("Enter flight number: ");
    scanf("%s", flights[flightCount].flightNumber);
    strcpy(flights[flightCount].status, "Scheduled");
    flights[flightCount].passengerCount = 0;
    flightCount++;
    printf("Flight added.\n");
}

void removeFlight() {
    char flightNumber[MAX_FLIGHT_NUMBER];
    printf("Enter flight number to remove: ");
    scanf("%s", flightNumber);
    int index = findFlightByNumber(flightNumber);
    if (index == -1) {
        printf("Flight not found.\n");
        return;
    }
    free(flights[index].passengers);
    for (int i = index; i < flightCount - 1; i++) {
        flights[i] = flights[i + 1];
    }
    flightCount--;
    printf("Flight removed.\n");
}

void editFlight() {
    char flightNumber[MAX_FLIGHT_NUMBER];
    printf("Enter flight number to edit: ");
    scanf("%s", flightNumber);
    int index = findFlightByNumber(flightNumber);
    if (index == -1) {
        printf("Flight not found.\n");
        return;
    }
    printf("Enter new flight number: ");
    scanf("%s", flights[index].flightNumber);
    printf("Flight edited.\n");
}

void setFlightStatus(char* flightNumber, char* status) {
    int index = findFlightByNumber(flightNumber);
    if (index == -1) {
        printf("Flight not found.\n");
        return;
    }
    strcpy(flights[index].status, status);
    printf("Flight status updated to %s.\n", status);
}

void addPassenger() {
    char flightNumber[MAX_FLIGHT_NUMBER];
    printf("Enter flight number to add passenger: ");
    scanf("%s", flightNumber);
    int index = findFlightByNumber(flightNumber);
    if (index == -1) {
        printf("Flight not found.\n");
        return;
    }
    if (flights[index].passengerCount >= MAX_PASSENGERS) {
        printf("Flight is full.\n");
        return;
    }
    printf("Enter passenger name: ");
    scanf("%s", flights[index].passengers[flights[index].passengerCount].name);
    strcpy(flights[index].passengers[flights[index].passengerCount].status, "Checked-In");
    flights[index].passengerCount++;
    printf("Passenger added.\n");
}

void assignPassengerToFlight() {
    char flightNumber[MAX_FLIGHT_NUMBER];
    char passengerName[50];
    printf("Enter flight number: ");
    scanf("%s", flightNumber);
    int index = findFlightByNumber(flightNumber);
    if (index == -1) {
        printf("Flight not found.\n");
        return;
    }
    printf("Enter passenger name: ");
    scanf("%s", passengerName);
    if (flights[index].passengerCount >= MAX_PASSENGERS) {
        printf("Flight is full.\n");
        return;
    }
    strcpy(flights[index].passengers[flights[index].passengerCount].name, passengerName);
    strcpy(flights[index].passengers[flights[index].passengerCount].status, "CustomerServiceDesc");
    flights[index].passengerCount++;
    printf("Passenger assigned to flight.\n");
}

void changePassengerStatusToOnBoard() {
    char flightNumber[MAX_FLIGHT_NUMBER];
    char passengerName[50];
    printf("Enter flight number: ");
    scanf("%s", flightNumber);
    int index = findFlightByNumber(flightNumber);
    if (index == -1) {
        printf("Flight not found.\n");
        return;
    }
    printf("Enter passenger name: ");
    scanf("%s", passengerName);
    for (int i = 0; i < flights[index].passengerCount; i++) {
        if (strcmp(flights[index].passengers[i].name, passengerName) == 0) {
            strcpy(flights[index].passengers[i].status, "OnBoard");
            printf("Passenger status updated to OnBoard.\n");
            return;
        }
    }
    printf("Passenger not found.\n");
}

void printPassengers() {
    char flightNumber[MAX_FLIGHT_NUMBER];
    printf("Enter flight number: ");
    scanf("%s", flightNumber);
    int index = findFlightByNumber(flightNumber);
    if (index == -1) {
        printf("Flight not found.\n");
        return;
    }
    printf("Passenger Report for Flight %s:\n", flights[index].flightNumber);
    for (int i = 0; i < flights[index].passengerCount; i++) {
        printf("Name: %s | Status: %s\n", flights[index].passengers[i].name, flights[index].passengers[i].status);
    }
}

void printMenu() {
    printf("\nAirport Management System\n");
    printf("0. Help\n");
    printf("1. Add Flight\n");
    printf("2. Remove Flight\n");
    printf("3. Edit Flight\n");
    printf("4. Set Flight Active\n");
    printf("5. Set Flight Completed\n");
    printf("6. Print Flight Report\n");
    printf("7. Add Passenger\n");
    printf("8. Assign Passenger to Flight\n");
    printf("9. Change Passenger Status to OnBoard\n");
    printf("10. Print Passenger Report\n");
    printf("11. Exit\n");
    printf("Choose an option: ");
}

int main() {
    flights = malloc(MAX_FLIGHTS * sizeof(Flight));
    int choice;
    do {
        printMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                printf("Help Information:\nEnter the number of the option you want to execute.\n");
                break;
            case 1:
                addFlight();
                break;
            case 2:
                removeFlight();
                break;
            case 3:
                editFlight();
                break;
            case 4:
                printf("Enter flight number to set Active: ");
                char flightNumber[MAX_FLIGHT_NUMBER];
                scanf("%s", flightNumber);
                setFlightStatus(flightNumber, "Active");
                break;
            case 5:
                printf("Enter flight number to set Completed: ");
                scanf("%s", flightNumber);
                setFlightStatus(flightNumber, "Completed");
                break;
            case 6:
                printFlights();
                break;
            case 7:
                addPassenger();
                break;
            case 8:
                assignPassengerToFlight();
                break;
            case 9:
                changePassengerStatusToOnBoard();
                break;
            case 10:
                printPassengers();
                break;
        }
    } while (choice != 11);
    
    for (int i = 0; i < flightCount; i++) {
        free(flights[i].passengers);
    }
    free(flights);
    return 0;
}