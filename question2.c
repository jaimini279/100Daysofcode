// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main() {

  int a,b,sum,difference,product,quotient;

printf("enter two numbers");
scanf("%d %d", &a, &b);

sum = a+b;
difference=a-b;
product=a*b;

printf("sum = %d\n",a+b);
printf("difference = %d\n",a-b);
printf("product =  %d\n",a*b);

if (b!= 0)
  printf("quotient = %d\n",a/b);
else
  printf("quotient cannot be divisible by zero\n");
  
  return 0;
}
