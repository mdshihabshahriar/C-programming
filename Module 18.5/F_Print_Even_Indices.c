#include<stdio.h>
void fun(int*a,int n,int index)
{
    if(index<0) return;
    if(index%2==0)
    {
        printf("%d ",a[index]);
    }
    fun(a,n,index-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,n,n-1);
    return 0;
}