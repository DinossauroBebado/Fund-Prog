//Faça uma função que receba um vetor (array) de 10 posições e retorne a sua soma.



#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define n 10

float sum(float number[n]){
    float suma = 0;
    int j ;
    for(j =0;j<n;j++){
        suma = suma + number[j];
    }
    return suma ;

}


int main(){
int i ;
float numbers[n];
//recebe os numeros
 for(i =0;i<n;i++){
        scanf("%f",&numbers[i]);
    }
//

printf("A soma eh %f",sum(numbers));


return 0 ;
}
