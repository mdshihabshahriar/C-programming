#include<stdio.h>
int main()
{
    int i,n;
    for ( i = 0; i <= 10; i++)
    {
        if (i==5)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
    
}