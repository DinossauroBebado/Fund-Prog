//Fa�a uma fun��o que calcule e retorne o n�mero e = 2, 71828183, utilizando a s�rie
//A fun��o deve receber como par�metro o n�mero de termos que ser� somados, N. Note que quanto maior esse
//n�mero, mais pr�xima do valor e estar� a resposta.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define num 100

double euler(int n){
    double N = 1;
    double soma = 1;//zero fatorial � 1 amiguinhos
    for(int j = 1;j<=n;j++){
        for(int i =j ; i>0 ;i--){
                N = N*(i);//fatorial
            }

     //printf("%f\n",N); descomente essa linha para algo legal

     soma = soma + 1/N ;
     //printf("%lf\n",soma);
     N=1;
    }
return soma ;
}

int main(){
   printf("%.60f",euler(num));
return 0;
}


