//Exercise 2.22 ,page 134,C HOW TO  PROGRAM Paul and Harvey Deitel
#include<stdio.h>
int main()
{
    int integer;
    printf("A PROGRAM THAT DETERMINES IF AN INTEGER IS ODD OR EVEN\n");
    printf("Enter an integer :");//Prompting for user input
    scanf("%d",&integer);        //Reading user input
    if(integer%2==0)  //Decision
    {
        printf("\nInteger is Even.");//output
    } else{
        printf("\nInteger is Odd.");
    }



     printf("\n\nSource : Exercise 2.22,page 134,C HOW TO  PROGRAM Paul and Harvey Deitel");// Exercise source

    return 0;
}
