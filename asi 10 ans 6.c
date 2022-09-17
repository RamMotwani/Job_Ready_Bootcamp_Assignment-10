#include<stdio.h>
int factorial(int n)
{
    int i,fac=1;
    for(i=1;i<=n;n--)
    {
        fac=fac*n;
    }
    return fac;
}
