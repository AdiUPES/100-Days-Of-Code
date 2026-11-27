Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count[str[i] - 'a']++;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(count[str[i] - 'a'] > 1)
        {
            printf("%c", str[i]);
            break;
        }
    }

    return 0;
}
