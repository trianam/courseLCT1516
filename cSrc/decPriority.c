//Compile it with gcc decPriority.c -o decPriority

#include<stdio.h>  //library for input/output

int main(void) {  //begin of main
  unsigned int a; //variables declaration
  unsigned int b;

  a = 0;  //variables initialization (because -- change the value)
  b = 3;
  int c1 = a---b; //behavior to test

  a = 0;
  b = 3;
  int c2 = (a--)-b; //test case 1

  a = 0;
  b = 3;
  int c3 = a-(--b); //test case 2

  printf("c1 = %d\n", c1);  //output of tests
  printf("c2 = %d\n", c2);
  printf("c3 = %d\n", c3);
  return 0;
}
