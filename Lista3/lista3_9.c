//Crie uma estrutura Cotação para monitorar ações da bolsa de valores. A estrutura tem os seguintes
//campos:
//a. Nome da companhia (50 caracteres).
//b. Área de atuação da companhia (50 caracteres).
//c. Estrutura Valor.
//A estrutura Valor, por sua vez, é uma estrutura com os campos:
//a. Valor neste momento da ação (em Reais).
//b. Valor da ação na hora da abertura da bolsa.
//c. Variação da ação em porcentagem, ou seja, quanto a ação cresceu ou caiu desde a
//abertura até o momento atual (de 0.0 a 100.0%).
//O programa deve criar um vetor com n elementos do tipo da estrutura Cotação, solicitando n ao
//usuário. O programa deve então colher do usuário as informações dos campos (a) até (c), com
//exceção do campo iii da estrutura Valor, a qual deve ser calculada pelo programa. Em seguida,
//deve imprimir em tela, por ordem decrescente de valorização a lista das ações e suas
//correspondentes valorizações.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


struct valor {
    float valor_atual,valor_abertura,valor_var ;

};

struct cotacao {
    char nome[50],area_atuacao[50];

    struct valor val ;

};



int main()
{
  int n;

  // numero de alunos
  printf("Quantas acoes a serem analisadas : \n");
  scanf("%d",&n);

  struct cotacao cot[n]; //inicia o struct com o numero de alunos
  struct cotacao temp[2] ;


  for(int z = 0;z<n;z++){
    printf("Nome da empresa :"); //nome empresa
    fflush(stdin);
    gets(cot[z].nome);

    printf("Area de atuação da companhia :"); //atuaçao
    fflush(stdin);
    gets(cot[z].area_atuacao);

    printf("Valor da acao neste momento em reais :"); //nome aluno
    fflush(stdin);
    scanf("%f",&cot[z].val.valor_atual);

    printf("Valor da acão na hora da abertura da bolsa em reais:"); //nome aluno
    fflush(stdin);
    scanf("%f",&cot[z].val.valor_abertura);
//  se o aumento foi positivo ou negativo
    if(cot[z].val.valor_atual<cot[z].val.valor_abertura){
        cot[z].val.valor_var = -(cot[z].val.valor_atual/cot[z].val.valor_abertura)*100;
    }
    else {
        cot[z].val.valor_var = (cot[z].val.valor_atual/cot[z].val.valor_abertura)*100;
    }

    }


  //selecionar as acoes por valorizacao
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        { if(cot[i].val.valor_var >cot[j].val.valor_var){
                temp[0] = cot[i]; //criado uma struct holder tempeporaria
                cot[i] = cot[j];
                cot[j] = temp[0];
          }

        }
    }


    for(int l = 0;l<n;l++){
        printf("|%.50s|",cot[l].nome);
        printf("|%.50s|",cot[l].area_atuacao);
        printf("|%.2f |",cot[l].val.valor_atual);
        printf("|%.2f |",cot[l].val.valor_abertura);
        printf("|%.2f |\n",cot[l].val.valor_var );


    }


return 0 ;
}



