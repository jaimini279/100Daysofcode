//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main() {

int length, breadth, area, perimeter;

  printf(" enter length and breadth");
  scanf("%d %d",&length, &breadth);

area = length*breadth;
perimeter = 2*(length+breadth);

  printf("area = %d\n",area);
  printf("perimeter = %d\n",perimeter);

  return 0;
}
