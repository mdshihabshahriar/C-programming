#include <stdio.h>

int count_before_one(int a[], int n) 
{
    int x = 0;
    
    for (int i = 0; i < n && a[i] != 1; i++) 
    {
        x++;
    }
    
    return x;
}

int main() 
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    int y = count_before_one(a, n);
    printf("%d\n", y);

    return 0;
}
