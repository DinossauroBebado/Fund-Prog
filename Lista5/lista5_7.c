//Elabore uma fun��o que receba duas strings como par�metros e verifique se a segunda string ocorre
//dentro da primeira. Use aritm�tica de ponteiros para acessar os caracteres das strings.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


void compare(*str1,*str2){
char *p1,*p2;
int i;
p1 = &str1[0];
p2 = &str2[0];
for(i=0; *(p1+i)!='\0'; i++) {
printf("[%d] = %c (endereco %p)\n", i, *(p1+i), &(*(p1+i)));
}


}


int main(){
char str1 = "japao";
char str2 = "pao";
compare(&str1,&str2);


}
