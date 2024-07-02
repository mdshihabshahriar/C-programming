#include<stdio.h>
//global
int x=500;
void fun(void)
{
    //printf("fun er x er adress - %p\n",&x);
}
int main()
{
    //printf("main er x er adress - %p\n",&x);

    //fun();

    int y=100;
    for (int i = 0; i < 5; i++)
    {
        int z=100;
    }
    printf("%d",y);
    return 0;
}