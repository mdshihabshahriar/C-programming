#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int m1,m2,a;
        scanf("%d %d %d",&m1, &m2, &a);
        int b=a;
        int c=(a*m1)/(m1+m2);
        int total=b-c;
        printf("%d\n",total);
    }
    
    return 0;
}