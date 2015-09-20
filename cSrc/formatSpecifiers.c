#include<stdio.h>

int main(void) {
  char vChar = -128;
  short vShort = -32768;
  int vInt = -2147483648;
  long vLong = -9223372036854775807;
  unsigned char vUChar = 255u;
  unsigned short vUShort = 65535u;
  unsigned int vUInt = 4294967295u;
  unsigned long vULong = 18446744073709551615u;
  float vFloat = 1.192093e-07;
  double vDouble = 2.220446e-16;
  long double vLDouble = 1.084202e-19;

  printf("char: %hhd\n", vChar);
  printf("short: %hd\n", vShort);
  printf("int: %d\n", vInt);
  printf("long: %ld\n", vLong);
  printf("unsigned char: %hhu\n", vUChar);
  printf("unsigned short: %hu\n", vUShort);
  printf("unsigned int: %u\n", vUInt);
  printf("unsigned long: %lu\n", vULong);
  printf("float: %e\n", vFloat);
  printf("double: %e\n", vDouble);
  printf("long double: %Le\n", vLDouble);  
  
  return 0;
}
