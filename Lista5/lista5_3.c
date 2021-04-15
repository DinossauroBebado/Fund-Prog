//Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de
//cada posição desse array.


#define n 10

int main(){
float M[n] = {1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.0};
int i;
for(i=0;i<n;i++){
    printf("%f | %d\n",M[i],&M[i]);


}


}
