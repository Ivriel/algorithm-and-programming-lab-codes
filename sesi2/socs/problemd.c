#include <stdio.h>

int main()
{
    char stringWord[15];
    for (int i = 0; i <= 4; i++)
    {
        scanf("%s", stringWord);
        printf("%10s|%s\n", stringWord, stringWord);
    }
    return 0;
}