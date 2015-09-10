#include<stdio.h>
#include<stdbool.h>

void main() {
  bool bt = true;
  bool bf = false;
  char cp = 1;
  char c0 = 0;
  char cn = -1;

  
  printf("bt = %d\n", bt);
  printf("bf = %d\n", bf);

  printf("c0 = 0 is: ");
  if(c0) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  printf("cp = 1 is: ");
  if(cp) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  printf("cn = -1 is: ");
  if(cn) {
    printf("true\n");
  } else {
    printf("false\n");
  }
}
