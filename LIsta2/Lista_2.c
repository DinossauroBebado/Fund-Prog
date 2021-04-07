#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 struct compromisso{
      int dia,mes,ano,hora,minuto;
      char descricao_compromisso[127];
    };

int main()
{
    int n ;
    printf("numero de compromissos:");
    scanf("%d",&n);

    struct compromisso agenda[n];
     for(int i = 0;i<n;i++){

        printf("dia:\n");
        scanf("%d",&agenda[i].dia);

        printf("mes:\n");
        scanf("%d",&agenda[i].mes);

        printf("ano:\n");
        scanf("%d",&agenda[i].ano);

        printf("hora:\n");
        scanf("%d",&agenda[i].hora);

        printf("minuto:\n");
        scanf("%d",&agenda[i].minuto);

        printf("Descricao:\n");
        scanf("%s",agenda[i].descricao_compromisso);


        printf("%d/%d/%d |%d :%d% | \n %s",agenda[i].dia,agenda[i].mes,agenda[i].ano,
               agenda[i].hora,agenda[i].minuto,agenda[i].descricao_compromisso);
     }
    return 0;
}



