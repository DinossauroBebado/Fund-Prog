
//Crie uma fun��o recursiva que receba um n�mero inteiro N e retorne o somat�rio dos n�meros de 1 a N.


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int sum(int N){
   if(N==1){
    return 1 ;
   }
   else{
        return N + sum(N-1);

   }

    }


int main(){
   int n ;
   printf("Quer saber a somatoria de que numero ? \n");
   scanf("%d",&n);
   printf("Somatoria = %d",sum(n));

return 0 ;
}
