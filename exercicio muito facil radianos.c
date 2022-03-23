#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
    float radianos,graus,pi;
float graus_radianos()


    setlocale(LC_ALL,"Portuguese");

//Pega o valor dado pelo usuário em radianos
    printf("Digite o valor do ângulo em radianos: \n");
    scanf("%f",& radianos);

//Converte em Graus
    graus = (radianos*(180/M_PI));
    printf("O ângulo em graus é de %.1f \n",graus);






}
