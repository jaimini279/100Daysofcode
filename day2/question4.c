//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main() {

  float radius, Area, Circumference;
  float pi = 3.14159;

  printf("enter the value of radius ");
  scanf("%f",&radius);

Area = pi*radius*radius;
Circumference = 2*pi*radius;

  printf("Area = %.2f\n",Area);
  printf("Circumference = %2.f\n",Circumference);

return 0;
}
