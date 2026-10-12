#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';
    printf("Happy Birthday to %s.\n", name);
    return 0;
}