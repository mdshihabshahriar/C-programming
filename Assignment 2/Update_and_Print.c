#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d %d",&a,&b);
    ar[a]=b;
    for (int i = n-1; i >=0; i--)
    {
        printf("%d",ar[i]);
        if (i>0)
        {
          printf(" ");
        }
        
    }
    
    return 0;
}