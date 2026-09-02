//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main() {

float Celsius, Fahrenheit;
 printf("enter the temperature of Celius");
 scanf("%f", &Celsius);
 
Fahrenheit = (Celsius*9/5)+32;

  printf("Fahrenheit = %.f\n",Fahrenheit);

return 0;
}
