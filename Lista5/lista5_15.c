//Faça uma função void imprimeTamString(int numStrings, char **strings) que recebe um vetor de
//strings de tamanho numStrings >= 0 e imprime o comprimento de cada string, um por linha.

 void imprimeTamString(int numStrings, char **strings){
int i ;


 printf("%s\n",strings);
  printf("%s\n",strings+1);
  printf("%s\n",strings+2);
  printf("%s\n",strings+3);

//for(i=0;i<numStrings;i++){
//    printf("%s",**(strings+i));
//
//
//}

}




 int main(){
 int numStrings = 5;
 char string[4][4] = {"maca","bana","abac","pera"};

 imprimeTamString(numStrings,&string[0][0]);




 }
