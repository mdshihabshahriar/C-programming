#include<stdio.h>
int main()
{
    double x=5.26;
    double*ptr=&x;
    //*ptr=100;

    printf("x er value-%0.2lf\n",x);
    printf("x er value-%0.2lf\n",*ptr);
    return 0;
}