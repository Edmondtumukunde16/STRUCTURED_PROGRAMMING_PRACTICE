//Exercise 3.5 ,page 172,C HOW TO  PROGRAM Paul and Harvey Deitel
//A program that calculates the sum of integers from 1 to 10.
#include<stdio.h>
int main()
{
    printf("A PROGRAM THAT CALCULATES THE SUM OF INTEGERS FROM 1 TO 10\n");
   int i=1;// setting the counter
   int sum=0;//initialization

    while(i<=10)// Basic loop
    {
    printf("%d\n",i);
    sum=sum+i;
    i++;
    }

     printf("Sum is %d\n",sum);//output



    return 0;
}
