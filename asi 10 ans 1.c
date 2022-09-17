#include<stdio.h>
float area (int);
float area (int r)
{
    float A,pi=3.14;
    A=pi*r*r;
    return A;
}
int main()
{
    int i;
    float c;
    printf("enter a radius to find area of circle");
    scanf("%d",&i);
    c=area(i);
    printf("area of circle is %f",c);
    return 0;

}
