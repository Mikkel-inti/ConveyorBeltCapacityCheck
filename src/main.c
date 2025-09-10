#include <stdio.h>

#define WEIGHT_PR_MOTOR 5.6

// Init variables:
float num_motor = 0.0;   // User input - number of motors
float pack_kg = 0.0;     // User input - package weight
float total_motor = 0.0; // Total weight  the motor can carry.

int main() {

  // Interaction with the terminal
  printf("How many motors are carrying the packages? ");

  scanf("%f", &num_motor);

  printf("How many kg of packages do we expect? ");

  scanf("%f", &pack_kg);

  // Calculating the total weight the motors can carry
  total_motor = num_motor * WEIGHT_PR_MOTOR;

  // Checking if package weight does not exceed
  // the weight that the motor can carry.

  if (pack_kg <= total_motor)
    printf("\nYes! The conveyor belt can carry the packages.\n");
  else
    printf("\nNo. the conveyor belt cannot carry the packages.\n");
  return 0;
}
