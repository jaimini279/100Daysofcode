//Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main() {

int a,b,temperature;

  printf("enter the value of a and b");
  scanf("%d %d", &a, &b);

temperature = a;
a = b;
b = temperature;

printf("After swaping: a = %d, b = %d\n",a,b);

return 0;
}
