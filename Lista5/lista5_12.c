//. Escreva um programa que contenha uma fun��o para calcular a m�dia geom�trica ou a m�dia
//aritm�tica entre dois n�meros reais recebidos como par�metros. Teste na parte principal do
//programa a fun��o criada (OBS.: os par�metros devem ser passados por refer�ncia/ponteiros!).
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
float media(float *n1, float *n2){
int tipo;
float x,y;
x = *n1;
y = *n2;
do{
    printf("Pressione:\n- 1 para a media geometrica \n- 2 para media aritimetica\n");
    scanf("%d",&tipo);}while(tipo!=2&&tipo!=1);

if(tipo==1){
    //media geometrica
    return sqrt(x*y);
}
if(tipo==2){
   return (x+y)/2;
}
}

int main(){
    float n1,n2,MEDIA;
    printf("Primeiro numero:");
    scanf("%f",&n1);
    printf("Segundo numero");
    scanf("%f",&n2);

    MEDIA = media(&n1,&n2);
    printf("A media foi %.2f",MEDIA);
    return 0 ;
}
