#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void) {
  //char
  printf("--------------------------\n");
  printf("INTEGER\n");
  printf("--------------------------\n");
  printf("char:\n");
  printf("\tsize = %d bytes\n", sizeof(char));
  printf("\tmin value = %d\n", CHAR_MIN);
  printf("\tmax value = %d\n", CHAR_MAX);
  printf("--------------------------\n");
  printf("unsigned char:\n");
  printf("\tsize = %d bytes\n", sizeof(unsigned char));
  printf("\tmin value = 0\n");
  printf("\tmax value = %u\n", UCHAR_MAX);
  printf("--------------------------\n");
  printf("signed char:\n");
  printf("\tsize = %d bytes\n", sizeof(signed char));
  printf("\tmin value = %d\n", SCHAR_MIN);
  printf("\tmax value = %d\n", SCHAR_MAX);
  printf("--------------------------\n");
  printf("--------------------------\n");

  //short
  printf("short:\n");
  printf("\tsize = %d bytes\n", sizeof(short));
  printf("\tmin value = %d\n", SHRT_MIN);
  printf("\tmax value = %d\n", SHRT_MAX);
  printf("--------------------------\n");
  printf("unsigned short:\n");
  printf("\tsize = %d bytes\n", sizeof(unsigned short));
  printf("\tmin value = 0\n");
  printf("\tmax value = %u\n", USHRT_MAX);
  printf("--------------------------\n");
  printf("--------------------------\n");

  //int
  printf("int:\n");
  printf("\tsize = %d bytes\n", sizeof(int));
  printf("\tmin value = %d\n", INT_MIN);
  printf("\tmax value = %d\n", INT_MAX);
  printf("--------------------------\n");
  printf("unsigned int:\n");
  printf("\tsize = %d bytes\n", sizeof(unsigned int));
  printf("\tmin value = 0\n");
  printf("\tmax value = %u\n", UINT_MAX);
  printf("--------------------------\n");
  printf("--------------------------\n");

  //long
  printf("long:\n");
  printf("\tsize = %d bytes\n", sizeof(long));
  printf("\tmin value = %ld\n", LONG_MIN);
  printf("\tmax value = %ld\n", LONG_MAX);
  printf("--------------------------\n");
  printf("unsigned long:\n");
  printf("\tsize = %d bytes\n", sizeof(unsigned long));
  printf("\tmin value = 0\n");
  printf("\tmax value = %lu\n", ULONG_MAX);
  printf("--------------------------\n");
  printf("--------------------------\n");

  //long long
  printf("long long:\n");
  printf("\tsize = %d bytes\n", sizeof(long long));
  printf("\tmin value = %ld\n", LLONG_MIN);
  printf("\tmax value = %ld\n", LLONG_MAX);
  printf("--------------------------\n");
  printf("unsigned long long:\n");
  printf("\tsize = %d bytes\n", sizeof(unsigned long long));
  printf("\tmin value = 0\n");
  printf("\tmax value = %lu\n", ULLONG_MAX);
  printf("--------------------------\n");
  printf("--------------------------\n");
  printf("FLOATING POINT\n");
  printf("--------------------------\n");

  //float
  printf("float:\n");
  printf("\tsize = %d bytes\n", sizeof(float));
  printf("\tmin value = %e\n", FLT_MIN);
  printf("\tmax value = %e\n", FLT_MAX);
  printf("\tmax number of decimals = %d\n", FLT_DIG);
  printf("\tepsilon = %e\n", FLT_EPSILON);
  printf("--------------------------\n");
  printf("--------------------------\n");

  //double
  printf("double:\n");
  printf("\tsize = %d bytes\n", sizeof(double));
  printf("\tmin value = %e\n", DBL_MIN);
  printf("\tmax value = %e\n", DBL_MAX);
  printf("\tmax number of decimals = %d\n", DBL_DIG);
  printf("\tepsilon = %e\n", DBL_EPSILON);
  printf("--------------------------\n");
  printf("--------------------------\n");

  //long double
  printf("long double:\n");
  printf("\tsize = %d bytes\n", sizeof(long double));
  printf("\tmin value = %Le\n", LDBL_MIN);
  printf("\tmax value = %Le\n", LDBL_MAX);
  printf("\tmax number of decimals = %d\n", LDBL_DIG);
  printf("\tepsilon = %Le\n", LDBL_EPSILON);
  printf("--------------------------\n");

  return 0;
}
