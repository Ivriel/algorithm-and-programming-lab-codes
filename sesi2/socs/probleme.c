#include <stdio.h>

int main()
{
    char stringWord1[21];
    char stringWord2[21];
    char stringWord3[21];

    scanf("%s %s %s", stringWord1, stringWord2, stringWord3);
    printf("%s %s %s\n", stringWord3, stringWord2, stringWord1);
    return 0;
}