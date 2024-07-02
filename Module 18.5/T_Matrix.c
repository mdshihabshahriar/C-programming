#include <stdio.h>
#include<stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int matrix[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sumPrimaryDiagonal = 0;
    int sumSecondaryDiagonal = 0;

    for (int i = 0; i < N; i++) {
        sumPrimaryDiagonal += matrix[i][i];
        sumSecondaryDiagonal += matrix[i][N - 1 - i];
    }

    int absoluteDifference = abs(sumPrimaryDiagonal - sumSecondaryDiagonal);

    printf("%d\n", absoluteDifference);

    return 0;
}
