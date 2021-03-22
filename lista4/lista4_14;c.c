////O número3025 possui a seguinte característica:
//a)30 + 25 = 55
//b)55 * 55 = 3025
//Desenvolva  uma  estrutura  modular  que  verifica,  através  de
//// uma  função,  e  imprima todos  os  números  de  quatro algarismos (de 1000 até 9999) que apresentam tal característica
//// .Resposta esperada: 2025, 3025, 9801.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int soma(int n){
int n1, n2;

n1 = n/100 ;
n2 = n-(n1*100) ;

printf("%d\n",n2);
printf("%d",n1);

return n1+n2 ;
}

//int pot()


int main(){


soma(3025);
}
