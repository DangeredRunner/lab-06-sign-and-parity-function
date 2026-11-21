/* Syntax defect: Missing a semicolon at the end of a statement (such as return 0 without ;), causing a compiler error. Fix: Add the missing ; at the end of the statement.

Logic defect: Checking n % 2 == 1 for odd numbers instead of n % 2 != 0, which fails for negative odd numbers like -13 in C because -13 % 2 is -1. Fix: Use n % 2 != 0 (or else after checking n % 2 == 0).

Runtime defect: Entering non-integer input like letters into scanf("%d", &n) without checking its return value, causing bad or uninitialized input behavior. Fix: Check if (scanf("%d", &n) != 1) and handle invalid input safely.*/
#include <stdio.h>

int classify (int n) {
    if (n>0 && n%2==0) return 0;
    else if (n>0) return 1;
    else if (n<0 && n%2==0) return 2;
    else if (n<0) return 3;
    else return 4;
}

int main()
{
    int n;
    scanf ("%d",&n);
    if (classify(n)==0) printf ("n is positive and even");
    else if (classify(n)==1) printf ("n is positive and odd");
    else if (classify(n)==2) printf ("n is negative and even");
    else if (classify(n)==3) printf ("n is negative and odd");
    else printf ("n is 0");
}
