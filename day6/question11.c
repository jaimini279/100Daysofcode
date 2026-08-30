//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main() {

int num;

printf("Enter the value");
scanf("%d",&num);

if(num % 2 == 0)
{printf("even");}
else
{printf("odd");}

return 0;
}
