#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int matrix[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <M; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int jadumatrix=1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(i == j || i+j==N-1)
            {
                if(matrix[i][j] != 1)
                {
                    jadumatrix=0;
                    break;
                }
            }
            else
            {
                if(matrix[i][j] != 0)
                {
                    jadumatrix=0;
                    break;
                }
            }
        }
        if(!jadumatrix)
        {
            break;
        }
    }
    if (jadumatrix)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}