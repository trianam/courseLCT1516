/*
Ask for a number of levels and print
the Tartaglia triangle from 0 to that
level. The values are indented to the
left and separated by tabulations.
*/

#include<stdio.h>

//function for calculating the factorial of n
unsigned int fact(unsigned int n) {
  unsigned int i;
  unsigned int r = 1; //result 

  //iterate from n to 2
  //(if n is 0 or 1 the result is already 1)
  for(i = n; i > 1; i--) {
    r *= i; //multiply to result
  }

  return r;
}

void main() {
  unsigned int levels;
  unsigned int r,c, curr;

  //ask for the number of levels
  printf("Enter the number of levels:");
  scanf("%d",&levels);

  //iterate all the rows (levels)
  for(r=0; r<levels; r++) {
    //for each row iterate all the columns
    for(c=0; c<=r; c++) {
      //calculate binomial
      curr = fact(r) / (fact(c)*fact(r-c));
      //and print it with a tab
      printf("%d\t", curr);
    }
    printf("\n"); //print the end of a row
  }
}
