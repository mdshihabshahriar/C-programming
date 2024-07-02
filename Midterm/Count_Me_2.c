#include <stdio.h>
#include <string.h>

int main() 
{
    char S[100001];  
    scanf("%s", S);

    int length = strlen(S);
    int z = 0;

    for (int i = 0; i < length; i++)
    {
        char c = S[i];
        
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            z++;
        }
    }

    printf("%d\n",z);

    return 0;
}
