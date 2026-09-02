//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main() {

int seconds;
int hours, minutes, sec;

printf("enter the time in seconds");
scanf("%d", &seconds);

hours = seconds/3600;
seconds = seconds % 3600;
minutes = seconds/60;
sec = seconds % 60;

printf("%d:%d:%d\n", hours, minutes, sec);

return 0;
}
