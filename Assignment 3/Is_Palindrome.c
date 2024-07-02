#include <stdio.h>
#include <string.h>

int is_palindrome(char a[]) 
{
    int len = strlen(a);
    for (int i = 0; i < len / 2; i++) 
    {
        if (a[i] != a[len - 1 - i]) 
        {
            return 0; 
        }
    }
    return 1; 
}

int main() 
{
    char a[1001]; 
    scanf("%s", a);

    int result = is_palindrome(a);

    if (result) 
    {
        printf("Palindrome\n");
    } else 
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
