#include<stdio.h>
int main()
{
    int n,col,row;
    scanf("%d",&n);
    int line=((n-1)/2)+6;

     for(int row=1;row<=line;row++)
    {
        for(col=1;col<=line-row;col++)
        {
            printf(" ");
        }
         for(col=1;col<=2*row-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
        {
       for(int j=0;j<5;j++)
       {
           printf(" ");
       }
        for (int j = 0; j < n; j++)
         {
             if(n%2==1)
             {
                  printf("*");
             }

        }
        printf("\n");
    }




    return 0;
}