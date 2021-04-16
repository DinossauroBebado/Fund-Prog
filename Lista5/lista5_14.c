
//Escreva uma função recursiva, que receba uma matriz quadrada e um número inteiro a. A função
//deve checar se o inteiro a está presente na matriz.


int checa(int*M,int a,int cont){

if(*M==a)
    return 1;
else
  if(cont==3){
    return 0;
  }
    cont++;
  return checa(M+1,a,cont);
}

int main(){
int M[2][2] = {{1,2},{3,4}};
int *p = &M[0][0];
int i = 0;
if(checa(p,i,0))
    printf("o inteiro  esta presente na matriz\n");
else{
    printf("o inteiro NAO esta presente na matriz\n");
}
}
