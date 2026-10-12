#include <stdio.h>

int main()
{
    char inputString[101];
    scanf("%[^\n]", inputString);
    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"%%s\\n\",\"%s\");\n", inputString);
    printf("    return 0;\n");
    printf("}\n");
    return 0;
}