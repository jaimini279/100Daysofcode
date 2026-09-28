//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include<stdio.h>
int main()

{
    float CP,SP,profit,loss,percentage;

       printf("Enter cost price and selling price");
       scanf("%f %f",&CP, &SP);

        if (SP > CP)
        {

         profit = SP - CP;
         percentage = (profit/CP)*100;

         printf("profit%.2f%%",percentage);

        }
        else if(SP < CP)
        {
 
         loss = CP - SP;
         percentage = (loss/CP)*100;

         printf("loss%.2f",percentage);

        }
        else
        {

          printf("No profit No loss");

       }

         return 0;
}
