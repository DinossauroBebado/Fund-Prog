//10. respectivos campos:
//a. Representacao Retangular:
//i. Componente Real.
//ii. Componente Complexa.
//b. Representaçao Polar
//i. Modulo.
//ii. angulo.
//O programa deve criar um vetor com dois elementos do tipo Numero Complexo. O programa deve
//solicitar ao usuario as componentes Real e Complexa de dois numeros complexos x e y. Em seguida, deve
//calcular e imprimir em tela os campos da Representacao Polar, alem das operacoes:
//a. x + y
//b. x − y
//c. x ∙ y
//d. x / y
//Sempre com as respostas na Representação Retangular.
//Para relembrar as operacoes com número complexos consulte: <https://www.intmath.com/complexnumbers/convert-polar-rectangular-interactive.php>

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#define n 2

struct retangular {
    float real,img ;

};

struct polar {
    float modulo,angulo;

};



int main()
{

  struct retangular ret[n];
  struct polar pol[5];

  for(int z = 0;z<n;z++){
    printf("---------------------------------\n");
    printf("Real:"); //nome empresa
    scanf("%f",&ret[z].real);

    printf("imaginario:"); //nome empresa
    scanf("%f",&ret[z].img);

    pol[z].modulo = sqrt(  pow(ret[z].real,2) +  pow(ret[z].img,2)  );

    pol[z].angulo = atan( ret[z].img/ret[z].real);


    printf("%.2f + %.2fi | modulo = %.2f |angulo = %.2f graus\n",ret[z].real,ret[z].img,pol[z].modulo,pol[z].angulo*(180/M_PI));
    }
    printf("--------------------------------------------\n");
    printf("x+y: ");
    ret[2].real = ret[0].real + ret[1].real;
    ret[2].img  = ret[0].img + ret[1].img;
    printf("%.2f + %.2fi\n", ret[2].real,ret[2].img);
    printf("--------------------------------------------\n");
    printf("x-y: ");
    ret[3].real = ret[0].real - ret[1].real;
    ret[3].img  = ret[0].img - ret[1].img;
    printf("%.2f + %.2fi\n", ret[3].real,ret[3].img);

    printf("--------------------------------------------\n");
    printf("x*y: ");
    ret[4].real = (pol[0].modulo*pol[1].modulo)*(cos(pol[0].angulo+pol[1].angulo));
    ret[4].img  = (pol[0].modulo*pol[1].modulo)*(sin(pol[0].angulo+pol[1].angulo));
    printf("%.2f + %.2fi\n", ret[4].real,ret[4].img);

    printf("--------------------------------------------\n");
    printf("x/y: ");
    ret[5].real = (pol[0].modulo/pol[1].modulo)*(cos(pol[0].angulo-pol[1].angulo));
    ret[5].img  = (pol[0].modulo/pol[1].modulo)*(sin(pol[0].angulo-pol[1].angulo));
    printf("%.2f + %.2fi\n", ret[5].real,ret[5].img);

    printf("--------------------------------------------\n");



return 0 ;
}

