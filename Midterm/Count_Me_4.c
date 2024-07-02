#include <stdio.h>

int main() 
{
    char S[10001];
    scanf("%s", S);

    int alpha[26] = {0};

    for (int i = 0; S[i] != '\0'; i++) 
    {
        char c = S[i];
        if (c >= 'a' && c <= 'z') 
        {
            alpha[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) 
    {
        if (alpha[i] > 0) 
        {
            printf("%c - %d\n", 'a' + i, alpha[i]);
        }
    }

    return 0;
}
