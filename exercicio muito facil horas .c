#include <stdio.h>
#include <locale.h>
#include <math.h>
    main()
    {
        setlocale(LC_ALL,"Portuguese");
        int i;
    float horas,meses,semanas,minutos,segundos,milissegundos;

//Pega as horas totais do usu�rio para converter horas nas vari�veis
    printf("Digite o valor de horas que voc� gostaria de converter.");
    scanf("%f",& horas);
//fator de convers�o de horas para meses,semanas,minutos,segundos,milissegundos
    meses=horas/(24*30);
    semanas=horas/(24*7);
    minutos=horas*(60);
    segundos=horas*(3600);
    milissegundos=horas*(3600*1000);

    //Impress�o dos fatores de convers�o

    printf("O valor convertido em meses, semanas, minutos, segundos e milissegundos respectivamente s�o:\n%f \n%f \n%.1f \n%.1f \n%.1f \n" ,meses,semanas,minutos,segundos,milissegundos);




    }
