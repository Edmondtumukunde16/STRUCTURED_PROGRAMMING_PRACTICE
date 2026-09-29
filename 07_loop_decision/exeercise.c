//Exercise 3.27 ,page 179,C HOW TO  PROGRAM Paul and Harvey Deitel
#include<stdio.h>
int main()
{

  int counter= 1;
  int number;

while (counter <=5)//while loop
{
    printf("\nEnter a number: ");//prompting for user input
    scanf("%d", &number);// reading user input
    if (number % 2 ==0) //Decision
    {
        printf("Number is Even\n");//Result
    }else
    {
        printf("Number is Odd\n");
    }
    counter++;//Repeating the process
}
    return 0;
}
