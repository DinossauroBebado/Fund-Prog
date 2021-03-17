/*Exibir  na  tela  a  tabela  de  códigos  ASCII  (
    American  Standard  Code  for  Information  Interchange)
     da  posição 97 até 122 (caracteres alfabéticos minúsculos).
Por exemplo: printf(“%d-%c\n”, i, i);97-a98-b99-c...122-z */

#include <stdio.h>

int main()
#define comeco 97
#define final 122
{
    int i;
    char s[256];
    for (i = comeco; i < final + 1; i++)
    {
        s[i] = i;
        printf("%d - %c\n", i, i);
    }

    return 0;
}
