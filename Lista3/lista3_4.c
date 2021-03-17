//Opere um controle de compromissos. Uma estrutura “compromisso” com os campos dia, mês, ano,
//hora e minutos (todos do tipo int), e o campo descricao_compromisso (127 caracteres). A estrutura
//“compromisso” deve ser usada para definir uma estrutura de dados “agenda” com N compromissos.
//O programa deve permitir a inserção de compromissos pelo usuário e apresenta-los em ordem de
//ocorrência, mostrando-se a data, hora e sua descrição. Fazer N=5.


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
        fflush(stdin);
        gets(agenda[i].descricao_compromisso);
        printf("%d",i);
        printf("----------------------------------------------------\n");

        printf("%d de %d compromissos\n",i+1,n);
     }
      for(int j = 0; j<n;j++){
        fflush(stdin);
        printf("%d/%d/%d |",agenda[j].dia,agenda[j].mes,agenda[j].ano);
        printf("%d :%d |",agenda[j].hora,agenda[j].minuto);
        printf("\n %s \n",agenda[j].descricao_compromisso);

        printf("------------------------------------------------------\n");
      }
    return 0;
}



