STRUCTURED PROGRAMING 
NAME: TUMUKUNDE EDMOND
REG.NO:S26B23/086
ACCESS: B39676
## Exercise 1 - Basic Output 
**Category:** Sequential Execution / Basic I/O
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise _2.21_.

**What the program does:**
The program displays a triangle using asterisk symbols using the printf statement  .

**Concepts used:**
printf function, \n newline character.

**How it works:**
The program starts execution from the main function. It then prints the first asterisk symbol. Each \n moves the cursor to the next line which also moves the asterisk symbol.This finally forms a triangle. Finally return 0 indicates successful execution.

**Example Run:** 
   
   *
   **
   ***
   ****

## Exercise 2 - input_process_output
**Category:** Arithmetic Operators
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16

**What the program does:**
The program asks the user for two integers and calculates sum, difference, product, quotient and remainder.

**Concepts used:**
 integer variables,printf, scanf, arithmetic operators +, -, *, /, %

**How it works:**
It reads two integers using scanf. Then it performs addition,subraction,multyplication,division,remainder and stores them in variables. Each result is printed with printf.

**Example Run:**

Enter first integer: 10
Enter second integer: 5
The sum is 15
The difference is 5
The quotientis 2
The remainder is 0
The product is 50

## Exercise 3 - decision
**Category:** Decision Making with if-else and Loops
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 2 Exercise 2.29__.

**What the program does:**
The program asks a user to enter an integer and decides whether its odd or even.

**Concepts used:**
printf,scanf, if-else, float variables, integer variables,arrithment operations

**How it works:**
The user enters the integer and the if statement determines whether the integer is even or odd.

**Example Run:**

Enter an integer  :5
Integer is Odd.

## Exercise 4 - basic_loop
**Category** Loops
**Source**Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise3.5.
**What the program does:**
The program calculates the sum of the first ten integers
**Concepts used:**
integer variables,while loop,printf
**How it works:**
The first integer is initialized to one and the while loop keeps on add the next nine integers.
**Example Run:**


1
2
3
4
5
6
7
8
9
10

Sum is 55.
## Exercise 5- loop_calculation
**Category:**  Loops
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 4.11.
**What the program does**
The program calculates and prints the sum pof all multiples of 7 from 1 to 100.
**Concepts used:**
for loop, integer variables,printf

**How it works:**
The for loop constantly adds multiples of seven above 1 and below 100.it then prints out the final sum

**Example Run:** 

Sum is 735.

## Exercise 6- loop_input
**Category:** Loops
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.23.
**What the program does:**
Reads 5 integers from user.
**Concepts used:**
while loop, printf,scanf, variable initialization

**How it works:**
It tells the user to enter an integer five timesv and it stops.
**Example Run:**


Enter a number : 8
Enter a number : 7
Enter a number : 6
Enter a number : 5
Enter a number : 4


## Exercise 7 - loop_decision
**Category:** Loops 
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.27 

**What the program does:**
Reads 5 integers and tellls whether it is either even or odd.

**Concepts used:**
while loop, if-else, printf, scanf,

**How it works:**
It reads an integer from the user and tells whether its even or odd.the while loop enables to reapeat untill the fifth entry which is the condition in the loop.

**Example Run:**

Enter a number:10
Number is Even
Enter a number:5
Number is Odd
Enter a number:7
Number is Odd
Enter a number:8
Number is Even
Enter a number:4
Number is Even


# Exercise 8 - interactive_program
**Category:** while loop / Arithmetic Calculation
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.16.

**What the program does:**
Calculates sales tax and total price. County tax 5% and state tax 4%.

**Concepts used:**
while(1) infinite loop,printf,scanf, break, float arithmetic calculation,

**How it works:**
Loop keeps asking for price until -1 is entered. Tax = price * (0.05+0.04). Total = price + tax.

**Example Run:**

Sales Tax Calculator (-1 to quit)

Enter item price :40000
Tax  :3600.00
Total: 43600.00

Enter item price   :-1
Bye!!
