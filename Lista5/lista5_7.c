/* 7. Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre
dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 100
#define q  50

int verifica(char *string1, char *string2){
    int i, j, contem = 0;
    for(i = 0, j = 0; (*(string1 + i)) != '\0'; i++){
        if((*(string1 + i)) == (*(string2 + j))){
            while( (*(string1 + i)) == (*(string2 + j)) ){
                i++;
                j++;

            if( (*(string2 + j)) == '\n' || (*(string2 + j)) == '\0')
                return 1;

            else if( (*(string1 + i)) != (*(string2 + j)) )
                contem = 0;
          }
        }
        else{
            continue;
        }
    }
    return contem;
}

int main(){


    char string1[6] = "japao";
    char string2[4] = "pao";





    int retorno = verifica(string1, string2);
    if(retorno == 1)
        printf("A segunda string esta contida na primeira string\n");
    else
        printf("A segunda string NAO esta contida na primeira string\n");
    return 0;
}

