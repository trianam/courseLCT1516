//Compile it with "gcc -lm second_degree_equation.c -o second_degree_equation"

#include<stdio.h>
#include<math.h>

void main() { //start of main
  float a,b,c;  //definition of variables for coeffients
  float delta;  //definition of variable for delta
  float x1,x2;  //definition of variables for solutions
  
  //Input of coefficients
  printf("Insert the coefficients of the equation \"Ax^2 + Bx + C = 0\"\n");
  printf("Insert 'A': ");
  scanf("%f", &a);
  printf("Insert 'B': ");
  scanf("%f", &b);
  printf("Insert 'C': ");
  scanf("%f", &c);
  
  //Calculus of delta
  delta = pow(b,2) - 4*a*c;

  //check if real solutions exists
  if(delta >= 0) {
    //calculate solutions
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    //output of solutions
    printf("The solutions of the equation are:\n");
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
  } else {  //if doesn't have real solutions print the error
    printf("The equation doesn't have real solutions.\n");
  }
}
