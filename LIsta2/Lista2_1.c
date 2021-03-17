/*Exibir  na  tela atabela  de  códigos  ASCII 
 (American  Standard  Code  for  Information 
 Interchange) da  posição 65 até posição 90 
 (caracteres alfabéticos maiúsculos). 
Por exemplo:printf(“%d-%c\n”, i, i);
65 - A66 - B67 - C... 90 - Z*/
#include <stdio.h>

int main()
#define comeco 65
#define final 90
{
    int i;
    char s[256];
    for (i = comeco; i < final + 1; i++)
    {
        s[i] = i;
        printf("%d - %c\n", i, s[i]);
    }

    return 0;
}