//2.Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for “A”, a função
//deverá calcular a média aritmética das três notas; se for “P”, deverá calcular a média ponderada, com pesos 5, 3 e 2.
//Retorne a média calculada.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define n 3

float media(float x,float y,float z , char modo){
    float media ;
    if(modo == 'A'){
         media = (x+y+z)/n ;
        return media ;
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
char modo;

do{
printf( "Qual o tipo de media: ");
fflush(stdin);
//scanf(" %c",&modo);
modo=getchar();

}while(modo!='P'&&modo!='A');

for(i = 0;i<n;i++){
    printf(" prova %d/%d :",i+1,n);
    scanf("%f",&prova[i]);
}

printf("A media eh %.2f",media(prova[0],prova[1],prova[2],modo));






return 0 ;
}
