#include <stdio.h>
#include <stdlib.h>
//Exercise 3.16,page 176 ,C HOW TO PROGRAM by Paul and Harvey Deitel.

int main()
  {

 float price, total, tax;
    float county_rate = 0.05;
    float state_rate = 0.04;

    printf("Sales Tax Calculator (-1 to quit)\n");

    while(1) {
        printf("\nEnter item price: ");
        scanf("%f", &price);

        if(price == -1) {
            break;
        }

        tax = price * (county_rate + state_rate);
        total = price + tax;

        printf("Tax: %.2f\n", tax);
        printf("Total: %.2f\n", total);
    }

    printf("Bye!!\n");

    return 0;
}
