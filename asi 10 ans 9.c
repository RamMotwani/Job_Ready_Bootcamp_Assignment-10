#include<stdio.h>
int contain_given_digit(int n, int d)
{
    int a;
    while(n!=0)
    {
        a=n%10;
        if(d==a)
        {
            return 1;
        }
        n=n/10;
    }
    return 0;
}
