//2.Elabore uma fun��o que receba tr�s notas de um aluno como par�metros e uma letra. Se a letra for �A�, a fun��o
//dever� calcular a m�dia aritm�tica das tr�s notas; se for �P�, dever� calcular a m�dia ponderada, com pesos 5, 3 e 2.
//Retorne a m�dia calculada.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define n 3

float media(float x,float y,float z , char modo){
    if(modo == 'A'){
        return (x+y+z)/n ;
    }
    else if (modo=='P'){
        return (5*x+3*y+2*z)/10;
    }
    else{
        printf("Modo invalido\n");
        return 0 ;
    }
}




int main(){
int i ;
float prova[n] ;
char modo[2];

do{
printf( "Qual o tipo de media: ");
fflush(stdin);
scanf("%c",&modo);
printf("%c",modo);
}while(modo!='P'||modo!='A');

for(i = 0;i<n;i++){
    printf(" prova %d/%d :",i+1,n);
    scanf("%f",&prova[i]);
}

printf("A media numero eh %d",media(prova[0],prova[1],prova[2],modo));






return 0 ;
}
