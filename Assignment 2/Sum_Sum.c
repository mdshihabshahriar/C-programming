#include<stdio.h>
int main()
{
    int n,a;
    int b=0;
    int c=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a);
        if (a>0)
        {
            b += a;
        }
        else if (a < 0)
    {
        c += a;
    }
    }
    printf("%d %d\n",b,c);
    
    return 0;
}