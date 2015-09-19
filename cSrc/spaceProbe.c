#include<stdio.h>  //library for input/output

int main(void) {  //begin of main
  //variable declaration
  double position, target, velocity, distance, time;

  //input
  printf("Insert the probe position in AU from the Sun: ");
  scanf("%lf", &position);
  
  printf("Insert the probe heliocentric velocity in km/s: ");
  scanf("%lf", &velocity);
  
  printf("Insert the target position in AU from the Sun: ");
  scanf("%lf", &target);

  printf("------------------\n");

  //check if the target is greater than current position
  if(target > position) {
    //convert distances from AU to km
    position = position * 149597870.700;
    target = target * 149597870.700;

    //calculate time
    distance = target - position;
    time = distance / velocity;

    //output
    printf("The probe will need %lf seconds to reach target\n", time);
    printf("  equivalent to %lf days\n", time/60./60./24.);
    printf("  equivalent to %lf years\n", time/60./60./24./365.);
  } else {
    printf("The probe already surpassed the target.\n");
  }
  
  return 0;
}
