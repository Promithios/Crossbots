#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
    float radianos,graus,pi;
float graus_radianos()


    setlocale(LC_ALL,"Portuguese");

//Pega o valor dado pelo usu�rio em radianos
    printf("Digite o valor do �ngulo em radianos: \n");
    scanf("%f",& radianos);

//Converte em Graus
    graus = (radianos*(180/M_PI));
    printf("O �ngulo em graus � de %.1f \n",graus);






}
