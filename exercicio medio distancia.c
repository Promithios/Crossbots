
#include <locale.h>

#include <stdio.h>
#include <math.h>
main()
{

    setlocale(LC_ALL,"Portuguese");
    float d,x1,x2,y1,y2;

    printf("***Distancia entre 2 pontos***");
    printf("\n\n");

    printf("Digite a abscissa do primeiro ponto=");
    scanf("%f",&x1);
    printf("\n");

    printf("Digite a ordenada do primeiro ponto=");
    scanf("%f",&y1);
    printf("\n");

printf("Digite a abscissa do segundo ponto=");
scanf("%f",&x2);
printf("\n");

printf("Digite a ordenada do segundo ponto=");
scanf("%f",&y2);
printf("\n");

//fórmula da distância
d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("A distancia entre os dois pontos é = %f ",d);






}
