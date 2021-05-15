#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 9

typedef struct {
int existe; 	// -1: não existe; 0..(n-1) posição do número da sorte no conjunto (não
                // haverá mais de um número da sorte)
int contaMenores;
} rgDados;

rgDados verificar(int x[n], int tam, int nroSorte) {
int i ;
rgDados ver ;
ver.existe = -1;
ver.contaMenores = 0 ;

for(i=0;i<tam;i++){
    if(nroSorte==x[i])
        ver.existe = i;
    if(x[i]<nroSorte){
        ver.contaMenores ++;
    }
}
 return ver;
};


int main(){
int conjunto[n] = {5, 7, 8, 0, 2, 9, 6, 1, 15};
int nroSorte;
int i;
printf("Qual o numero da sorte ?\n");
scanf("%d", &nroSorte);

rgDados ver = verificar(conjunto,n,nroSorte);

float porcentagem = ver.contaMenores/9.0 ;
printf("Conjunto: ");
for(i=0;i<n;i++)
    printf("%d:%d; ",i,conjunto[i]);
    if(ver.existe>=0)
        printf("\nNumero da sorte: %d(existe na posicao %d).\n",nroSorte,ver.existe);
    else{
        printf("\nNumero da sorte: %d(nao existe no conjunto).\n",nroSorte);
    }
printf("Existem %d valores inferiores ao numero da sorte(%.2f%% do total).\n",ver.contaMenores, porcentagem*100);



return 0;
}
