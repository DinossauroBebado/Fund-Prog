
//. Escreva uma fun��o recursiva que some todos os n�meros de um vetor e retorne o valor da soma
//(OBS.: utilize ponteiros na fun��o que ser� criada).

int sum(int *n,int i){
    int s = *n;

    if (i <=0){
        return 0;
    }else{
        return (sum(n, i - 1) + n[i - 1]);
    }
}


int main(){

int soma;
int n[5] = {1,2,3,4,7};
int i = sizeof(n);

soma = sum(n,5);

printf("%d",soma);

}
