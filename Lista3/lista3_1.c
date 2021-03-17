1---------------------------------------------------
#include <stdio.h>
#include <string.h>

 struct posicao{
      int x ;
      int y ;
    };

int main()
{ struct posicao pos ;
    printf("X:");
    scanf("%d",&pos.x);

    printf("y:");
    scanf("%d",&pos.y);

    if(pos.x>0){ //sabe se eh na direita
            if(pos.y>0){
            printf("  primeiro quadrante");
            printf("  primeiro quadrante");
          }
          else if (pos.y<0){
            printf(" quarto quadrante");
          }else{
                  printf("Eixo X");
          }
    }
    else if (pos.x<0){ //sabe se eh na esquerda
           if(pos.y>0){
                printf(" segundo quadrante");
          }
          else if (pos.y<0){
                printf(" terceiro quadrante");
          }else{
                  printf("Eixo X");
               }

    }
     else{
        if(pos.y!=0){
            printf("Eixo Y");
        }
        else
        printf("Origem");
     }


    return 0;
}
