#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);
    
    while (T--) 
    {
        int N;
        scanf("%d", &N);
        
        char S[N];
        scanf("%s", S);
        
        int tiger = 0;
        int pathaan = 0;
        
        for (int i = 0; i < N; i++) 
        {
            if (S[i] == 'T') 
            {
                tiger++;
            }
             else if (S[i] == 'P') 
            {
                pathaan++;
            }
        }
        
        if (tiger > pathaan) 
        {
            printf("Tiger\n");
        }
         else if (pathaan > tiger) 
        {
            printf("Pathaan\n");
        }
         else 
        {
            printf("Draw\n");
        }
    }
    
    return 0;
}
