#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int acha_palavra(char string[11], char palavra_dicionario[11]){

    int i ,semelhanca = 0 ;

    for(i = 0;i<11;i++){
        if(string[i]==palavra_dicionario[i]){
            semelhanca++;
        }
    }

    return semelhanca;

}

int main(){
 char dicionario[4][11];
    strcpy(dicionario[0], "bicicletas");
    strcpy(dicionario[1], "amarelados");
    strcpy(dicionario[2], "adocicadas");
    strcpy(dicionario[3], "computador");
 char string[11];

 int i,j,porcentagem = 0, palavra_dict = 0 ;

    //palavra do usuario

     fflush(stdin);
     gets(string);

     for(i=0;i<4;i++){
    //compara a palavra com todas do dicionario e mantem a com maior porcentagem
        if( acha_palavra(string,dicionario[i])> porcentagem){
           porcentagem = acha_palavra(string,dicionario[i]);
           palavra_dict = i;
        }
     }
     printf("%d - A palavra correta eh %s\n",(porcentagem-1)*10,dicionario[palavra_dict]);


return 0 ;
}
