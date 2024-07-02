#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    for (int a = 0; a < T; a++) 
    {
        char S[10001];
        scanf("%s", S);

        int capital = 0;
        int small = 0;
        int digit = 0;

        for (int i = 0; S[i] != '\0'; i++) 
        {
            char c = S[i];

            if (c >= 'A' && c <= 'Z') 
            {
                capital++;
            } else if (c >= 'a' && c <= 'z') 
            {
                small++;
            } else if (c >= '0' && c <= '9') 
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}
