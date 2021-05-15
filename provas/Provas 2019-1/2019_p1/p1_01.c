#include <stdio.h>



int conta_cantos(int imagem[4][4]){
    int cantos = 0;
    int i,j;

    for(i=0;i<4;i++){
             for(j=0;j<4;j++){
                if(imagem[i][j] == 1 && imagem[i][j+1] == 1 &&imagem[i+1][j] == 1 && imagem[i+1][j+1] == 0){
                    cantos++;
                }
             }
    }
    return cantos ;
}


int main(){
    int i,j;
    int cantos;
    int imagem[4][4];
    for(i=0;i<4;i++){
             for(j=0;j<4;j++){
                do{
                    printf("Imagem[%d][%d]: ",i,j);
                    scanf("%d",&imagem[i][j]);
                  }while(imagem[i][j]!=0&&imagem[i][j]!=1);
             }
    }

    printf("\n\n\n---------------------------------------------\n\n\n");

    for(i=0;i<4;i++){
             for(j=0;j<4;j++){
                printf("%d ",imagem[i][j]);
             }
             printf("\n");
    }

 printf("\n---------------------------------------------\n");

 cantos = conta_cantos(imagem);

 printf("A imagem tem %d cantos\n",cantos);
 return 0 ;
}











