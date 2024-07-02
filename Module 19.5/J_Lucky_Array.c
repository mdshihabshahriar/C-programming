#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int min_element=100001;
    int min_count=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]<min_element)
        {
            min_element=a[i];
            min_count=1;
        }
        else if (a[i]==min_element)
        {
            min_count++;
        }
    }
    if (min_count % 2==1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }
    return 0;
}