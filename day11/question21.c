//.Q2: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include<stdio.h>
int main()

{
   int month;

      printf("Enter the number");
      scanf("%d",&month);

       switch(month)
      
     {
       case 1:
          printf("January, days 31");
          break;

       case 2:
          printf("February, days 28");
          break;

       case 3:
          printf("March, days 30");
          break;

       case 4:
          printf("April, days 31");
          break;

       case 5:
          printf("May, days 30");
          break;

       case 6:
          printf("June, days 31");
          break;

       case 7:
          printf("July, days 30");
          break;

       case 8:
          printf("August, days 31");
          break;
       
       case 9:
          printf("September, days 30");
          break;

       case 10:
          printf("Octumber, days31");
          break;

       case 11:
          printf("November, days30");
          break;

       case 12:
          printf("december, days31");
          break;

       default :
          printf("Invalid input");
          break;
     }

    return 0;
}
