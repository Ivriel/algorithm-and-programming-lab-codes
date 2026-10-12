#include <stdio.h>

int main()
{
    char stringName[101];

    scanf("%[^\n]", stringName);
    printf("Congrats \"%s\" for joining the CS department at BINUS.\n", stringName);
    return 0;
}