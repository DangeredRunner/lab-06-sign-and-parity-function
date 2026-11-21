
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