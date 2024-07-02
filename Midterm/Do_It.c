#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 0; i < a; i++) 
    {
        for (int c = 1; c <= b; c++) 
        {
            printf("%d ", c);
        }
        printf("\n");
    }

    return 0;
}
