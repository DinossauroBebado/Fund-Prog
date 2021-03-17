#include <stdio.h>

#include <math.h>


 struct posicao{
      int x ;
      int y ;
    };

int main()
{ struct posicao pos[2] ;

  int d,i ;

  for( i = 0;i<2;i++){
    printf("Ponto %d \n",i+1);
    printf("X:");
    scanf("%d",&pos[i].x);

    printf("y:");
    scanf("%d",&pos[i].y);
  }
//calculo distancia

   d = sqrt(pow((pos[1].x - pos[0].x),2)+ pow((pos[1].y - pos[0].y),2));
   printf("A distancia entre os pontos eh %d",d);

    return 0;
}
