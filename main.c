#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
/* EX001
    int contador, num = 3;

    while (contador < 5)
    {
        printf("%d\n", num);
        num = num + 3;
        contador = contador + 1;
    }
*/
/* EX002
    int cont;
/* USANDO FOR
    for (cont=1; cont<=100; cont++)
    {
     printf("%d\n", cont);
    }
*/
/* USANDO WHILE
    while (cont<=99){
        cont+=1;
        printf("%d\n", cont);
    }
*/
/* COM DO WHILE
    do{
        cont+=1;
        printf("%d\n", cont);
    }while(cont<=99);
*/
/* EX003
    int conta=11;
    while (conta>0){
        conta--;
        printf("%d\n", conta);
    } printf("Fim!");
*/
/* EX004
    int val;
    for (val=1000; val<=100000; val+=1000)
    {
        printf("%d\n", val);
    }
*/
/* EX005
    int contador = 0;
    int num = 0;
    int soma = 0;
    while (contador < 10)
    {
        printf("Digite um n�mero: ");
        scanf("%d", &num);
        soma = soma + num;
        contador += 1;
    }
    printf("A soma dos valores �: %d", soma);
*/
/* EX006
    int contador = 0;
    int num = 0;
    int soma = 0;

    while (contador < 10)
    {
        printf("Digite um n�mero: ");
        scanf("%d", &num);
        soma = soma + num;
        contador += 1;
    }
    printf("A m�dia dos valores �: %d", soma/10);
*/
/* EX007
    int contador = 0;
    int num = 0;
    int soma = 0;
    int media = 0;
    while (contador < 10)
    {
        printf("Digite um n�mero: ");
        scanf("%d", &num);
        if (num > 0)
        {
            soma = soma + num;
            contador += 1;
        }

    }
    printf("A m�dia dos valores �: %d", soma/10);
*/
/* EX008
    int contador = 0;
    int num = 0;
    int maior, menor = 0;

    while (contador < 10)
    {
        printf("Digite um valor: ");
        scanf("%d", &num);
        //Desbuggar a primeira vez que digitar numeros
        maior = contador == 0 ? num : maior;
        menor = contador == 0 ? num : menor;
        // Testar at� pegar o maior e menor n�mero digitado
        maior = num > maior ? num : maior;
        menor = num < menor ? num : menor;
        contador = contador + 1;
    }
    printf("O maior valor digitado foi %d e o menor %d!", maior, menor);
*/
/* EX009
    int contador = 0;
    int num = 0;
    int impar = 1;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    while (contador < num)
    {
        printf("%d\n", impar);
        contador = contador + 1;
        impar = impar + 2;
    }
*/
/* 010
    int contador = 0;
    int num = 0;
    int soma = 0;

    while (contador < 50)
    {
        num = num + 2;
        soma = soma + num;
        contador = contador + 1;

    }
    printf("A soma �: %d", soma);
*/
/* EX011
    int contador = 0;
    int num = 0;
    int soma = 0;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    while (contador < num + 1)
    {
        printf("%d\n", contador);
        contador = contador + 1;
    }
*/
/* EX012
    int num = 0;
    int contador = 0;
    int soma = 0;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    for(contador = 1; contador <= (num - 1); contador++)
    {
        if (num % contador == 0)
        {
            soma = soma + contador;
        }
    }
    printf("A soma dos divisores �: %d", soma);
*/
/* EX013
    int contador = 0;
    int soma = 0;

    for(contador = 1; contador <= 1000; contador++)
    {
        soma = contador % 3 == 0 || contador % 5 == 0 ? soma + contador : soma;
    }
   printf("A soma dos n�meros �: %d", soma);
*/
/* EX014
    int d1, d2, num, contador = 0;
    printf("Quantas vezes voc� quer lan�ar os dados? ");
    scanf("%d", &num);

    srand(time(NULL));

    for (contador = 1; contador <= num; contador++)
    {
        d1 = (rand() % 5) + 1;
        d2 = (rand() % 5) + 1;
        printf("Lan�amento %d: ", contador);
        if (d1 != d2)
        {
            if (d1 > d2)
            {
                printf("%d > %d\n", d1, d2);
            }
            else
            {
                printf("%d > %d\n", d1, d2);
            }
        }
        else
        {
            printf("%d = %d\n", d1, d2);
        }
    }
*/
/* EX015
    float num, contador = 0;
    float resultado = 0;

    while (num != 0)
    {
        printf("Digite um n�mero qualquer: ");
        scanf("%f", &num);

        printf("O quadrado dele �: %.0f\n", num * num);

        printf("O cubo dele �: %.0f\n", num * num * num);

        printf("A ra�z quadrada dele �: %.2f\n", sqrt(num));
    }
*/
/* EX016
    float num1, num2;
    int index = 0;
    float resultado = 0;

    while (index != 5)
    {
        printf
        ("Digite a op��o desejada:\n(1)Adi��o\n(2)Subtra��o\n(3)Multiplica��o\n(4)Divis�o\n(5)Sa�da\n");
        scanf("%d", &index);


        if (index == 5)
        {
            printf("O c�digo foi finalizado!");
            break;
        }


        printf("Agora digite 2 n�meros para fazer o c�lculo: ");
        scanf("%f %f", &num1, &num2);

        switch (index)
        {
            //Adi��o
            case 1:
            printf("A soma dos n�meros �: %.0f\n", num1 + num2);
            break;
            //Subtar��o
            case 2:
            printf("A subtra��o dos n�meros �: %.0f\n", num1 - num2);
            break;
            // Multiplica��o
            case 3:
            printf("A multiplica��o dos n�meros �: %.0f\n", num1 * num2);
            break;
            // Divis�o
            case 4:
            printf("A divis�o dos n�meros �: %.2f\n", num1 / num2);
            break;
        }
    }
*/
/* EX017
    int chico = 150;
    int ze = 110;
    int anos = 0;

    while (chico != ze)
    {
        chico = chico + 2;
        ze = ze + 3;
        anos += 1;
    }

    printf
    ("A quantidade de anos necess�ria para que Z� seja maior que Chico s�o %d anos", anos + 1);
*/
/* EX018
    double salario = 2000;
    long double ano;

    for (ano = 1; ano <= (2022 - 1995); ano++)
    {

        salario = salario + (salario * (1.015 * ano));
    }
    printf("O salario dele e: %f", salario);
*/
/* EX019
    int valor, nota = 100, contador;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);


    for (contador = 1; contador <= 7; contador++)
    {
        printf("Devera ser entregue %d notas de %d\n", valor / nota, nota);
        valor = valor % nota;
        switch(contador)
        {
            case 1:
            nota = 50;
            break;

            case 2:
            nota = 20;
            break;

            case 3:
            nota = 10;
            break;

            case 4:
            nota = 5;
            break;

            case 5:
            nota = 2;
            break;

            case 6:
            nota = 1;
            break;
        }

    }

*/
/* EX020
    int num = 2, resultado = 0, contador = 0, divisao = 0, alcance = 0, soma = 0;

    printf("Digite um numero para saber se e primo: \n");
    scanf("%d", &alcance);

    inicio:
    if (num <= alcance)
    {
        for (contador = 2; contador < num; contador++)
        {
            resultado = 0;
            divisao = num % contador;
            if (divisao == 0)
            {
                resultado = resultado + 1;
                break;
            }
        }

        if (resultado == 1)
            printf("");

        if (resultado == 0)
        {
            printf("O numero %d e primo!\n", num);
            soma = soma + num;
        }


        num++;
        goto inicio;
    }
    printf("A soma dos primos �: %d", soma);
*/
/* EX021
    int num = 0, resultado = 0, contador = 0, divisao = 0, alcance = 0, soma = 0, aumento = 0;

    printf("Digite um intervalo para saber quantos primos existem: \n");
    scanf("%d %d", &aumento, &alcance);

    inicio:
    if (aumento <= alcance)
    {
        for (contador = 2; contador <  aumento; contador++)
        {
            resultado = 0;
            divisao = (num + aumento) % contador;
            if (divisao == 0)
            {
                resultado = resultado + 1;
                break;
            }
        }

        if (resultado == 1)
            printf("");

        if (resultado == 0)
        {
            soma = soma + 1;
        }

        aumento++;
        goto inicio;
    }
    printf("A quantidade de numeros primos e: %d", soma);
*/
/* EZ022
    int num1 = 999, num2, produto, numInverso = 0, aux1, qtd = 0, aux2, maior = 0, fator1, fator2;

    for (; num1 >= 100; num1--) {
        for (num2 = num1; num2 >= 100; num2--) {
            produto = num1 * num2;

            if (produto > maior) {
                aux1 = produto;
                while (aux1 != 0) {
                    qtd++;
                    aux1 /= 10;
                }

                aux1 = produto;
                numInverso = 0;
                while(aux1 != 0) {
                    aux2 = aux1 % 10;
                    numInverso += aux2 * pow(10, qtd - 1);
                    aux1 /= 10;
                    qtd--;
                }

                if (produto == numInverso) {
                    maior = numInverso;
                    fator1 = num1;
                    fator2 = num2;
                }
            }
        }
    }

    printf("%d x %d = %d\n", fator1, fator2, maior);
*/
/* EX023
    int linhas, contador, vezes;
    char letra = 65;
    printf("Digite o numero de linhas que voce quer ver: \n");
    scanf("%d", &linhas);

    for (vezes = 1; vezes <= linhas; vezes++)
    {
        for (contador = 1; contador <= vezes; contador++)
        {
            printf("%c ", letra);
            if (letra == 90)
                letra = 64;
            letra = letra + 1;

        }
        printf("\n");

    }
*/
    return 0;

}
