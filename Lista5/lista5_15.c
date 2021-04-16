//Faça uma função void imprimeTamString(int numStrings, char **strings) que recebe um vetor de
//strings de tamanho numStrings >= 0 e imprime o comprimento de cada string, um por linha.

 void imprimeTamString(int numStrings, char **strings){
  int i,j,cont = 0;
//printf("%c \n",*((*(strings+1))+2) );
//   because you need to first de-reference to one of the actual string pointers and then you to
//   de-reference that selected string pointer down to the desired character.
//  (Note that I added extra parenthesis for clarity in the order of operations there).

  for (i = 0; i <numStrings; i++){
     for (j = 0; j <sizeof(strings); j++){
      if(*((*(strings+i))+j)=='\0'){
        printf("%s : %d \n",*(strings+i), cont);
        cont = 0;
        break;
      }
       cont++;
      }
  }


}




 int main(){

 char *strings[4] = {"maca","abacaxi","banana","pera" };
 int numStrings =4;
 imprimeTamString(numStrings,strings);

 }
