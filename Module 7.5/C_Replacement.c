#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
        if (ar[i]>0)
        {
            ar[i]=1;
        }
        else if (ar[i]<0)
        {
            ar[i]=2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",ar[i]);
        if (i<n-1)
        {
            printf(" ");
        }
        
    }
    printf("\n");
    return 0;
}