#include <stdio.h>
#include <locale.h>
    main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero;

    printf("Digite o valor do n�mero:\n\n");
    scanf("%d",&numero);

    //� preciso achar o m�dulo dos n�meros que resultam em 0 e caso haja a intersec��o entre o m�dulo de 5 e de 3 escrever na tela Crossbots.
    //Se o n�mero n�o satisfazer a primeira condi��o, a ordem das condi��es subsequentes � irrelevante.
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
