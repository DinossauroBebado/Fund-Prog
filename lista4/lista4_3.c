//Faça uma função que calcule e retorne o número e = 2, 71828183, utilizando a série
//A função deve receber como parâmetro o número de termos que será somados, N. Note que quanto maior esse
//número, mais próxima do valor e estará a resposta.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define num 100

double euler(int n){
    double N = 1;
    double soma = 1;//zero fatorial é 1 amiguinhos
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


