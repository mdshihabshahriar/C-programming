#include <stdio.h>

void odd_even() 
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &A[i]);
    }

    int x = 0, y = 0;

    for (int i = 0; i < N; i++) 
    {
        if (A[i] % 2 == 0) 
        {
            x++;
        } else 
        {
            y++;
        }
    }

    printf("%d %d\n", x, y);
}

int main() 
{
    odd_even();
    return 0;
}
