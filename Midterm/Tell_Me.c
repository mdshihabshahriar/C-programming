#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    while (T--) 
    {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++) 
        {
            scanf("%d", &a[i]);
        }

        int b;
        scanf("%d", &b);

        int d = 0;

        for (int i = 0; i < n; i++) 
        {
            if (a[i] == b) 
            {
                d = 1;
                break;
            }
        }

        if (d) 
        {
            printf("YES\n");
        } else 
        {
            printf("NO\n");
        }
    }

    return 0;
}
