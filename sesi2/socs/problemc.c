#include <stdio.h>

int main()
{
    char stringID[11];
    char stringName[101];
    char studentClass;
    int classNumber;

    scanf("%s", stringID);
    scanf(" %[^\n]", stringName);
    scanf(" %c %d", &studentClass, &classNumber);

    printf("Id    : %s\n", stringID);
    printf("Name  : %s\n", stringName);
    printf("Class : %c\n", studentClass);
    printf("Num   : %d\n", classNumber);
    return 0;
}