#include <stdio.h>

int main()
{
    char character;

    printf("introduza o caracteres:\t");
    scanf("%c",&character);

printf("          %c         \n",character);
printf("          %c %c           \n",character);
printf("          %c%c%c %c          \n",character,character,character);
printf("        *****        \n");
printf("       *******       \n");
printf("      *********      \n");
printf("     ***********     \n");
printf("    *************    \n");
printf("   ***************   \n");
printf("  *****************  \n");
printf(" ******************* \n");

return 0;
}