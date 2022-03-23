#include <stdio.h>
#include <locale.h>
    main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero;

    printf("Digite o valor do número:\n\n");
    scanf("%d",&numero);

    //É preciso achar o módulo dos números que resultam em 0 e caso haja a intersecção entre o módulo de 5 e de 3 escrever na tela Crossbots.
    //Se o número não satisfazer a primeira condição, a ordem das condições subsequentes é irrelevante.
    if(numero=numero-numero%5 && numero=numero-numero%3)
    {
        printf("Crossbots");
    }
    else
        if(numero=numero-numero%5)
    {
        printf("Bots");

    }
    else
        if(numero=numero-numero%3)
    {
        printf("Cross");
    }
    else
        printf("%d",numero);


}
