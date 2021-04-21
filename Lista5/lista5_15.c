//Faça uma função void imprimeTamString(int numStrings, char **strings) que recebe um vetor de
//strings de tamanho numStrings >= 0 e imprime o comprimento de cada string, um por linha.

 void imprimeTamString(int numStrings, char **strings){
  int i,j,cont = 0;
//   printf("%c \n",*((*(strings+1))+2) ) = strings[1][2];

  // passa pelas palavras
  for (i = 0; i <numStrings; i++){
    //passa pelas letras
     for (j = 0; j <sizeof(strings); j++){
      //procura pelo fim da palavra
      if(*((*(strings+i))+j)=='\0'){
        printf("%s : %d \n",*(strings+i), cont);
        cont = 0;
        break;//vai para a proxima palavra
      }
       cont++;
      }
  }


}




 int main(){

 char *strings[4] = {"maca","abacaxi","banana","pera" };
 int  numStrings =4;
 imprimeTamString(numStrings,strings);

 }
