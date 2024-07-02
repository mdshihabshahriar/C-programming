#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    int c = 0;
    int d = 0;

    for (int i = 0; i < n; i++)
     {
        if (a[i] % 2 == 0) 
        {
            c++;
        }
        if (a[i] % 3 == 0 && a[i] % 2 != 0)
        {
            d++;
        }
    }

    printf("%d %d\n", c,d);

    return 0;
}
