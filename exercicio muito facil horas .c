#include <stdio.h>
#include <locale.h>
#include <math.h>
    main()
    {
        setlocale(LC_ALL,"Portuguese");
        int i;
    float horas,meses,semanas,minutos,segundos,milissegundos;

//Pega as horas totais do usuário para converter horas nas variáveis
    printf("Digite o valor de horas que você gostaria de converter.");
    scanf("%f",& horas);
//fator de conversão de horas para meses,semanas,minutos,segundos,milissegundos
    meses=horas/(24*30);
    semanas=horas/(24*7);
    minutos=horas*(60);
    segundos=horas*(3600);
    milissegundos=horas*(3600*1000);

    //Impressão dos fatores de conversão

    printf("O valor convertido em meses, semanas, minutos, segundos e milissegundos respectivamente são:\n%f \n%f \n%.1f \n%.1f \n%.1f \n" ,meses,semanas,minutos,segundos,milissegundos);




    }
