//Desenvolvauma  estrutura  modular com uma  fun��o que  recebe  atrav�s de
// par�metro um n�mero inteiro positivo e retorna a quantidade de d�gitos deste n�mero.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int digitos(float N){
    int i;
    for(i = 0;i<10;i++){
        printf("%f\n",N/pow(10,i));
        if((N/pow(10,i))<0.0){
            return i;
        }
    }
}


int main(){
int d ;
    d = digitos(3000);
    printf("o numero de digitos eh %d",d);

}
