//Exercise 3.23 ,page 179,C HOW TO  PROGRAM Paul and Harvey Deitel
#include<stdio.h>
int main()
{
  int counter= 1;
  int number;
  int largest;

while (counter <=5)//while loop
{
    printf(" Enter a number: ");//prompting for user input
    scanf("%d", &number);// reading user input
    counter++;
}
    return 0;
}
