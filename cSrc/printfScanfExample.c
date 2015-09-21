#include<stdio.h>

int main(void) {
  float floatVar;
  long longVar;
  printf("Input\\output\ndemonstration\n\n");
  printf("Insert a rational number: ");
  scanf("%f", &floatVar);
  printf("Insert a long integer: ");
  scanf("%ld", &longVar);
  printf("Rational is: %f; integer is: %ld\n", floatVar, longVar);
  printf("Rational in scientific notation: %e\n", floatVar);
  return 0;
}
