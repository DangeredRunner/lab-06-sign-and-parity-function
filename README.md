# lab-06-sign-and-parity-function

##Problem- 
I needed a function that classifies an integer by its sign (positive, negative, or zero) and parity (even or odd) while handling edge cases and common defects clearly.   

##What I built- 
A C program with a classify(n) function that returns distinct codes for positive even, positive odd, negative even, negative odd, and zero, paired with a main function that reads an integer and prints the matching description.   

##How it works- 
Read an integer n from standard input.Call classify(n) to check sign and divisibility by 2, returning 0 for positive even, 1 for positive odd, 2 for negative even, 3 for negative odd, and 4 for zero.Match the returned code in main and print whether n is positive and even, positive and odd, negative and even, negative and odd, or 0.

##How I tested it- 
I tested the program with -8, 0, and 13, getting "n is negative and even" for -8, "n is 0" for 0, and "n is positive and odd" for 13.   

##What I learned- 
Separating sign checks (positive, negative, zero) and parity checks (n % 2 == 0) keeps branching clear, and identifying syntax, logic, and runtime defects helps make input handling more reliable.   

##Limitations- 
The program does not validate non-integer input in scanf, which can cause a runtime failure if invalid input is entered.
