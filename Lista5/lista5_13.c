
//. Escreva uma função recursiva que some todos os números de um vetor e retorne o valor da soma
//(OBS.: utilize ponteiros na função que será criada).

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
