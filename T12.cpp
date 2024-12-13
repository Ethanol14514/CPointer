#include "head.h"
void connectString(char *str1,char *str2)
{
    char* head = str1;
    while (*str1 != '\0')
        str1++;
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    return;
}

void T12()
{
    char a[90],b[30];
    scanf("%s", a);
    scanf("%s", b);
    connectString(a,b);
    printf("\n After connected: %s\n",a);
}
