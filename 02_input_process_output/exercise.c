//Exercise 2.16 ,page 134,C HOW TO  PROGRAM Paul and Harvey Deitel
#include<stdio.h>
int main()
{
  int first_integer,second_integer,sum,diffrence,product,quotient,remainder;
  printf("A PROGRAMM THAT PERFORMS CALCULATIONS BETWEEN THE FIRST INTEGER AND THE SECOND.\n");
  printf("\nEnter first  integer:");//Prompting user to enter first integer.
  scanf("%d",&first_integer);     //Reading user input
  printf("Enter second integer:");//Prompting user to enter second integer
  scanf("%d",&second_integer);    //Reading user input

  sum=first_integer+second_integer;//Process
  diffrence=first_integer-second_integer;
  product=first_integer*second_integer;
  quotient=first_integer/second_integer;
  remainder=first_integer%second_integer;

  printf("\nThe sum is %d.\n",sum);//Output
  printf("The difference is %d.\n",diffrence);
  printf("The product is %d.\n",product);
  printf("The quotient is %d.\n",quotient);
  printf("The remainder is %d.\n",remainder);


    return 0;
}
