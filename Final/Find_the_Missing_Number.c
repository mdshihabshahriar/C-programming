#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    while (x--)
    {
        long long m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        long long y=-1;
        if (a!=0)
        {
            y=m/(a*b*c);
        }
        if (a*b*c*y==m)
        {
            printf("%lld\n",y);
        }
        else
        {
            printf("-1\n");
        }
    }
    
    return 0;
}