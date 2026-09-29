//Exercise 4.11 ,page 225,C HOW TO  PROGRAM Paul and Harvey Deitel
//A program that calculates and print the sum of all multiples of 7 from 1 to 100.
#include<stdio.h>
int main()
{
  int i;
  int sum=0;

  for(i=7;i<=100;i+=7)//arithmetic loop
  {
  sum = sum+i;
  }
   printf("\nSum is %d.\n",sum);//output
   return 0;
}
