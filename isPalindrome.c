#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int x)
{
    char str[12];
    sprintf(str, "%d", x);
    int j = strlen(str);
    for (int i=0; i<j/2; i++)
    {
        if (str[i]!=str[j-1-i])
        {
            return 0;
        }
    }
return 1;
}
int main()
{
    int x = 121;
    int y = 100;
    printf ("%d",isPalindrome(y));
    printf ("%d",isPalindrome(x));
    return 0;
}
