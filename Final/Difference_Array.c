#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        int n;
        scanf("%d", &n);

        int A[n], B[n], C[n];

        for (int i = 0; i < n; i++) 
        {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (B[i] > B[j]) 
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++) 
        {
            C[i] = abs(A[i] - B[i]);
            printf("%d", C[i]);

            if (i < n - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
