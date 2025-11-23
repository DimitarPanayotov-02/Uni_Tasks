#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


struct Car {
  char brand[50];
  int year;
};

int main() {
  // Allocate memory for one Car struct
  struct Car *ptr =(struct Car*) malloc(sizeof(struct Car));

  // Check if allocation was successful
  if (ptr == NULL) {
    printf("Memory allocation failed.\n");
    return 1; // Exit the program with an error code
  }

  // Set values
  strcpy(ptr->brand, "Honda");
  ptr->year = 2022;

  // Print values
  printf("Brand: %s\n", ptr->brand);
  printf("Year: %d\n", ptr->year);

  // Free memory
  free(ptr);

  return 0;
}