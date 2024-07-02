#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortAscending(int *a, int *b, int *c) 
{
    if (*a > *b) {
        swap(a, b);
    }
    if (*b > *c) {
        swap(b, c);
    }
    if (*a > *b) {
        swap(a, b);
    }
}

int main() 
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int originalA = A, originalB = B, originalC = C;

    sortAscending(&A, &B, &C);

    printf("%d\n%d\n%d\n\n", A, B, C);
    printf("%d\n%d\n%d\n", originalA, originalB, originalC);

    return 0;
}
