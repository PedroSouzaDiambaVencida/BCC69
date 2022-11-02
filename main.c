#include <stdio.h>
#include <stdlib.h>

int main()
{
/* EX001
    int num1, num2;
    printf("insira dois numeros inteiros: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if(num1<num2){
        printf("O maior numero entre os dois eh: %d", num2);
    }
    if(num2<num1){
        printf("O maior numero entre os dois eh: %d", num1);
    }
*/

/* EX002
    float numer, numer2;
    printf("Insira um numero: ");
    scanf("%f", &numer);
    if (numer>0){
    numer2=sqrt(numer);
    printf("a raiz quadrada do numero inserido eh: %f", numer2);
    }else{
        (numer<0);
        printf("o numero eh negativo");
    }
*/

/* EX003
    float numba, numba1, numbapot;
    printf("insira um numero: ");
    scanf("%f", &numba);
    if (numba>0){
        numba1=sqrt(numba);
        printf("a raiz quadrada desse numero eh: %f", numba1);
    }else{
    numbapot = numba*numba;
    printf("esse numero ao quadrado eh: %f", numbapot);
*/

/* EX004
    float choom, choom1, choompot;
    printf("insira um numero: ");
    scanf("%f", &choom);
    if (choom>=0){
        choom1=choom*choom;
        choompot=sqrt(choom);
    printf("esse numero ao quadrado eh: %f /n", choom1);
    printf("e a raiz desse numero eh: %f", choompot);
    }else{
    printf("esse numero eh negativo");
    }
*/

/* EX005
    int choomba, resto;
    printf("insira um numero inteiro: ");
    scanf("%d", &choomba);
    resto=choomba%2;
    if (resto==0){
        printf("seu numero eh par");
    }else{
        printf("seu numero eh impar");
    }
*/

    /* EX006
    int n1, n2, dif1, dif2;
    printf("insira dois numeros inteiros: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    if(n1>n2){
        dif1=n1-n2;
        printf("o maior numero entre os dois eh: %d/n", n1);
        printf("a diferença entre esses numeroes eh: %d", dif1);
    }else{
        printf("o maior numeros entre os dois eh: %d", n2);
        printf("a diferença entre esses numeros eh: %d", dif2, dif2=n1-n2);
    }
*/

/* EX007
    int numbr, numbrr;
    printf("insira dois numeros: ");
    scanf("%d %d", &numbr, &numbrr);
    if(numbr>numbrr){
        printf("o maior numero entre os dois eh %d", numbr, numbrr);
    }
    if(numbr == numbrr){
        printf("os numeros sao iguais");
    }
*/
    /* EX008
    float x1, x2, media;
    printf("digite uma nota entre 0 a 10: ");
    scanf("%f %f", &x1, &x2);
    if((x1>0,x1<=10)&&(x2>0,x2<=10)){
        media=(x1+x2)/2;
        printf("a media das notas inseridas eh: %f", media);
    }
    if((x1<0,x1>10)&&(x2<0,x2>10)){
        printf("sua nota eh invalida.");
    }
*/

/* EX009
  int salario, emprestimo, salario_20;
    printf("Digite o salario e o valor da prestacao do emprestimo:");
    scanf("%d" "%d", &salario, &emprestimo);
    salario_20 = salario/5;
    if (salario_20 > emprestimo){
      printf("Emprestimo concedido");
    }
    if (salario_20 < emprestimo){
      printf("Emprestimo nao concedido");
    }
    printf("\nFim do programa!\n\n");
    system("pause");
*/

/* EX010
    char genero;
    float H, M, halt, peso_IDM;
        printf("Se for homem digite H, se for mulher digite M: ");
        scanf("%c", &genero);

    switch( genero )
        {
            case 'H':
                printf("Digite sua altura em centimetros: ");
                scanf("%f", &halt);
                printf("Seu peso ideal eh: %.2f\n", (72.7 * halt) - 58);
                break;

            case 'M':
                printf("Digite sua altura em centimetros: ");
                scanf("%f", &halt);
                printf("Seu peso ideal eh: %.2f\n", (62.1 * halt) - 44.7);
                break;
        }
    printf("\nFim do programa!\n\n");
    system("pause");
*/

/* EX011
    int num,soma;
    soma=0;

    printf("Digite um numero inteiro e positivo qualquer: ");

    scanf("%d",&num);

    if(num>0){
       while(num>0){
       soma=soma+num%10;
       num=num/10;
       }
       printf("A soma dos algarismos desse numero eh de: %d\n",soma);
    }else{
       printf("O numero eh invalido.");
   }
*/

/* EX012
    int num;

    printf("insira um numero inteiro: ");
    scanf("%d", &num);

    if (num >= 0) printf("o logaritmo desse numero eh: %f", log10(num));
    else printf("O numero eh invalido.");
*/

/* ex013
    float num1, num2, num3, media;
    printf("digite a nota de primeira prova: ");
    scanf("%f", &num1);
    printf("digite a nota da segunda prova: ");
    scanf("%f", &num2);
    printf("digite a nota da terceira prova: ");
    scanf("%f", &num3);
    media=num1+num2+num3/2;
    if(media>=60){
        printf("voce foi aprovado!");
    }else{
    printf("voce foi reprovado");
    }
*/

/* EX014
    float num1, num2, num3, media;
    printf("digite a nota do laboratorio: ");
    scanf("%f", &num1);
    printf("digite a nota da primeira prova: ");
    scanf("%f", &num2);
    printf("digite a nota da segunda prova: ");
    scanf("%f", &num3);
    media = (num1 * 2 + num2 * 3 + num3 * 5) / 10;
    if(media<=2.9){
        printf("voce foi reprovado");
    }else if((media>=3)&&(media<=4.9)){
        printf("voce precisa fazer a recuperacao");
    }else if ((media>=5)&&(media<=10)){
        printf("voce foi aprovado!");
    }
*/

/*EX015
    int dia;
    printf("digite um numero de 1 a 7: ");
    scanf("%d", &dia);
    switch (dia){
    case 1 :
        printf("corresponde a domingo");
        break;
    case 2 :
        printf("corresponde a segunda");
        break;
    case 3 :
        printf("corresponde a terça");
        break;
    case 4 :
        printf("corresponde a quarta");
        break;
    case 5 :
        printf("corresponde a quinta");
        break;
    case 6 :
        printf("corresponde a sexta");
        break;
    case 7 :
        printf("corresponde a sabado");
        break;
    default :
    printf ("valor invalido.");
    }
*/

/* EX016
        int mes;
    printf("digite o numero de um mes: ");
    scanf("%d", &mes);
    switch (mes){
    case 1 :
        printf("janeiro");
        break;
    case 2 :
        printf("fevereiro");
        break;
    case 3 :
        printf("março");
        break;
    case 4 :
        printf("abril");
        break;
    case 5 :
        printf("maio");
        break;
    case 6 :
        printf("junho");
        break;
    case 7 :
        printf("julho");
        break;
    case 8 :
        printf("agosto");
        break;
    case 9 :
        printf("setembro");
        break;
    case 10 :
        printf("outubro");
        break;
    case 11 :
        printf("novembro");
        break;
    case 12 :
        printf("dezembro");
        break;
    default :
    printf ("numero invalido EL peruANO.");
    }
*/

/* EX017
    float area, basemaior, basemenor, altura;
    printf("Digite a base maior: ");
    scanf("%f", &basemaior);
    printf("Digite a base menor: ");
    scanf("%f", &basemenor);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    if (basemaior > 0 && basemenor > 0) {
        area = ((basemaior + basemenor) * altura) / 2;
        printf("A area do trapezio eh: %f", area);
    } else {
        printf("As bases devem ser maiores que zero.");
    }
*/

/* EX018
    int op, numba, numba2, res;
    printf("escolha uma opção \n");
    printf("1 - soma \n");
    printf("2 - subtração \n");
    printf("3 - multiplicação \n");
    printf("4 - divisão \n");
    printf("opção: ");
    scanf("%d", &op);

    switch (op){
    case 1 :
        printf("insira dois numeros: \n");
        scanf("%d %d", &numba, &numba2);
        res=numba+numba2;
        printf("a soma eh: %d\n", res);
        break;
    case 2 :
        printf("insira dois numeros\n");
        scanf("%d %d", &numba, &numba2);
        res=numba-numba2;
        printf("a subtração eh: %d\n", res);
        break;
    case 3 :
        printf("insira dois numeros\n");
        scanf("%d %d", &numba, &numba2);
        res=numba*numba2;
        printf("a multiplicação eh: %d\n", res);
        break;
    case 4 :
        printf("insira dois numeros\n");
        scanf("%d %d", &numba, &numba2);
        res=numba/numba2;
        printf("a divisão eh: %d\n", res);
        break;
    default :
        printf("a opção eh invalida.\n");
    }
*/

/* EX019
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0) printf("O número é divisível por 3 e 5.");
    else if (num % 3 == 0) printf("O número é divisível por 3.");
    else if (num % 5 == 0) printf("O número é divisível por 5.");
    else printf("O número não é divisível por 3 ou 5.");
*/

/* EX020
    int a, b, c;
    printf("digite o primeiro lado: ");
    scanf("%d", &a);
    printf("digite o segundo lado: ");
    scanf("%d", &b);
    printf("digite o terceiro lado: ");
    scanf("%d", &c);
    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && b == c)
            printf("O triangulo eh equilatero.");
        else if (a == b || b == c || a == c)
            printf("O triangulo eh isosceles.");
        else
            printf("O triangulo eh escaleno.");
    }
    else
        printf("Os lados nao formam um triangulo.");
*/

/* EX021
    int nm1, nm2, op, res;
    printf("escolha uma das opçoes abaixo.\n");
    printf("1- Soma de 2 numeros.\n");
    printf("2- Diferença entre 2 numeros (maior pelo menor).\n");
    printf("3- Produto entre 2 números.\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    printf("Opção: ");
    scanf("%d", &op);

    switch(op){
    case 1 :
        printf("digite um numero: \n");
        scanf("%d", &nm1);
        printf("digite outro numero: \n");
        scanf("%d", &nm2);
        res=nm1+nm2;
        printf("a soma eh: %d", res);
        break;
    case 2 :
        printf("digite um numero: \n");
        scanf("%d", &nm1);
        printf("digite outro numero: \n");
        scanf("%d", &nm2);
        res=nm1-nm2;
        printf("a diferenca eh: %d", res);
        break;
    case 3 :
        printf("digite um numero: \n");
        scanf("%d", &nm1);
        printf("digite outro numero: \n");
        scanf("%d", &nm2);
        res=nm1*nm2;
        printf("o produto eh: %d", res);
        break;
    case 4 :
        if((nm1>=0)||(nm2>=0)){
            printf("digite um numero: \n");
            scanf("%d", &nm1);
            printf("digite outro numero: \n");
            scanf("%d", &nm2);
            res=nm1/nm2;
            printf("a divisao eh: %d", res);
        }else if((nm1>=0)||(nm2>=0)){
        printf("o denominador nao pode ser zero.");
        }
        break;
    default:
        printf("opcao invalida.");
            }
*/

/* EX022
    int idade, temposervi;
    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("agora digite seu tempo de serviço: ");
    scanf("%d", &temposervi);
    if((idade>=65)||(temposervi>=30)||(idade>=60)&&(temposervi>=25)){
        printf("voce pode se aposentar.");
    }else{
        printf("voce nao pode se aposentar.");
    }
*/

/* EX023
    int ano;
    printf("insira um ano: ");
    scanf("%d", &ano);
    if ((ano % 400 == 0)||(ano % 4 == 0)&&(ano % 100 != 0)){
        printf("seu ano eh bisexto.");
    }else{
        printf("seu ano nao eh bisexto");
    }
*/

/* EX024
    float val, pre;
    int est;
    printf("insira o valor do produto: ");
    scanf("%f", &val);
    printf("insira um estado entre MG(1), MS(2), SP(3) e RJ(4): ");
    scanf("%d", &est);
    switch(est){
    case 1 :
        pre=(val*0.07)/100;
        printf("o valor do produto com imposto em minas eh: %f", pre);
        break;
    case 2 :
        pre=(val*0.08)/100;
        printf("o valor do produto com imposto em mato grosso eh: %f", pre);
        break;
    case 3 :
        pre=(val*0.12)/100;
        printf("o valor do produto com imposto em sao paulo eh: %f", pre);
        break;
    case 4 :
        pre=(val*0.15)/100;
        printf("o valor do produto com imposto no rio de janeiro eh: %f", pre);
        break;
    default:
        printf("estado selecionado eh invalido.");
    }
*/

/* EX025
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a != 0)
    {
        delta = b * b - 4 * a * c;
        if (delta < 0) printf("Não existe raiz.");
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("Raiz única: %f", x1);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Raízes reais: %f e %f", x1, x2);
        }
    }
    else printf("Não é equação de segundo grau.");
*/

/* EX026
    float gas, km, consumo;
    printf("digite a distancia percorrida por um carro: ");
    scanf("%f", &km);
    printf("digite quantos litros de gasolina foram consumidos: ");
    scanf("%f", &gas);
    consumo=km/gas;
    if((consumo>=8)&&(consumo<14)){
        printf("economico!");
    }else if(consumo>=14){
        printf("super economico!");
    }else printf("venda o carro!");
*/

/* EX027
    int idade;
    printf("digite a idade do nadador: ");
    scanf("%d", &idade);
    if((idade>=5)&&(idade<=7)){
        printf("classificado no grupo infantil A.");
    }else if((idade>=8)&&(idade<=10)){
        printf("classificado no grupo infantil B.");
    }else if((idade>=11)&&(idade<=13)){
        printf("classificado no grupo juvenil A.");
    }else if((idade>=14)&&(idade<=17)){
        printf("classificado no grupo juvenil B.");
    }else if(idade>=18) printf("classificado no grupo senior.");
*/

/* EX028
    int num1, num2, num3, opcao;
    float media;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    printf("Escolha uma opção:\n");
    printf("1 - Geométrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmônica\n");
    printf("4 - Aritmética\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            media = pow(num1 * num2 * num3, 1.0 / 3.0);
            printf("A media geometrica eh: %f", media);
            break;
        case 2:
            media = ((1 * num1) + (2 * num2) + (3 * num3)) / 3;
            printf("A media ponderada eh: %f", media);
            break;
        case 3:
            media = 1 / ((1.0 / num1) + (1.0 / num2) + (1.0 / num3));
            printf("A media harmonica eh: %f", media);
            break;
        case 4:
            media = (num1 + num2 + num3) / 3.0;
            printf("A media aritmetica eh: %f", media);
            break;
        default:
            printf("Opcao invalida.");
    }
*/

/* EX029
    int acerto=0, soma;

    printf("Agora, voce ira fazer uma prova de matematica, boa sorte!\n");

    printf("1-Qual eh a soma de 20+20? \n");
    scanf("%d", &soma);
    if(soma==40){
        printf("acertou!\n");
        acerto++;
    }else printf("errou\n");

    printf("2-Qual a soma de 55+10? \n");
    scanf("%d", &soma);
    if(soma==65){
        acerto++;
        printf("acertou\n!");
    }else printf("errou\n");

    printf("3-Qual a soma de 14+6? \n");
    scanf("%d", &soma);
    if(soma==20){
        acerto++;
        printf("acertou!\n");
    }else printf("errou\n");

    printf("4-qual a soma de 63+19? \n");
    scanf("%d", &soma);
    if(soma==82){
        acerto++;
        printf("acertou!\n");
    }else printf("errou\n");

    printf("5-qual a soma de 22+22? \n");
    scanf("%d", &soma);
    if(soma==44){
        acerto++;
        printf("acertou\n!");
    }else printf("errou\n");

    printf("voce acertou %d vezes.", acerto);
*/

/* EX030
    int num1,num2,num3;
    printf("digite um numero: ");
    scanf("%d", &num1);
    printf("digite outro numero: ");
    scanf("%d", &num2);
    printf("digite mais um numero: ");
    scanf("%d", &num3);
        if (num1 < num2 && num1 < num3) {
        if (num2 < num3) printf("%d, %d, %d", num1, num2, num3);
        else printf("%d, %d, %d", num1, num3, num2);
    }else if (num2 < num1 && num2 < num3) {
        if (num1 < num3) printf("%d, %d, %d", num2, num1, num3);
        else printf("%d, %d, %d", num2, num3, num1);
    }else {
        if (num1 < num2) printf("%d, %d, %d", num3, num1, num2);
        else printf("%d, %d, %d", num3, num2, num1);
    }
*/

/* EX031
    int alt, peso;
    printf("insira sua altura: ");
    scanf("%d", &alt);
    printf("agora insira seu peso: ");
    scanf("%d", &peso);
    if(alt<120){
        if(peso<60) printf("grupo A");
        else if((peso>=60)&&(peso<=90)) printf("grupo D");
        else if(peso>90) printf("grupo G");
    }else if((alt>=120)&&(alt<=170)){
        if(peso<60) printf("grupo B");
        else if((peso>=60)&&(peso<=90)) printf("grupo E");
        else if(peso>90) printf("grupo H");
    }else if(alt>170){
        if(peso<60) printf("grupo C");
        else if((peso>=60)&&(peso<=90)) printf("grupo F");
        else if(peso>90) printf("grupo I");
    }
*/

/* EX032
    int prod;
    float quan, val;
    printf("insira o codigo do produto voce deseja: ");
    scanf("%d", &prod);
    printf("agora insira a quantidade: ");
    scanf("%f", &quan);
    switch (prod){
        case 100:
            val = 1.20;
            break;
        case 101:
            val = 1.30;
            break;
        case 102:
            val = 1.50;
            break;
        case 103:
            val = 1.20;
            break;
        case 104:
            val = 1.70;
            break;
        case 105:
            val = 2.20;
            break;
        case 106:
            val = 1.00;
            break;
        default:
            printf("codigo invalido.");
    }
    printf("o preco total eh: %f", quan*val);
*/

/* EX033
    float pre1, pre2, perc;
    printf("insira o preco antigo do produto: ");
    scanf("%f", &pre1);
    if (pre1<= 50) perc = 0.05;
    else if (pre1<= 100) perc=0.1;
    else perc=0.15;
    pre2=pre1*(1+perc);
    printf("o preco novo do produto eh: %f\n", pre2);
    if (pre2<= 80) printf("barato!");
    else if (pre2<=120) printf("normal!");
    else if (pre2<=200) printf("caro!");
    else printf("muito caro!");
*/

/* EX034
    float nota, falta;
    printf("insira as notas do aluno, de 0 a 10: ");
    scanf("%f", &nota);
    printf("agora insira o numero de faltas: ");
    scanf("%f", &falta);

    if(nota<3.9){
        if(falta<20||falta>20) printf("conceito E");
    }else if(nota>4&&nota<4.9){
            if(falta<=20) printf("conceito D");
            else if(falta>20) printf("conceito E");
    }else if(nota>5&&nota<7.4){
            if(falta<=20) printf("conceito C");
            else if(falta>20) printf("conceito D");
    }else if(nota>7.5&&nota<8.9){
            if(falta<=20) printf("conceito B");
            else if(falta>20) printf("conceito C");
    }else if(nota>=9&&nota<=10){
            if(falta<=20) printf("conceito A");
            else if(falta>20) printf("conceito B");
    }else printf("dados invalidos.");
*/

/* EX035
        int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("Mês inválido.");
    } else if (dia < 1 || dia > 31) {
        printf("Dia inválido.");
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) {
            printf("Dia inválido.");
        } else {
            printf("Data válida.");
        }
    } else if (mes == 2) {
        if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
            if (dia > 29) {
                printf("Dia inválido.");
            } else {
                printf("Data válida.");
            }
        } else {
            if (dia > 28) {
                printf("Dia inválido.");
            } else {
                printf("Data válida.");
            }
        }
    } else {
        printf("Data válida.");
    }
*/

/* EX036
    float comm, venda;
    printf("insira o valor de venda: ");
    scanf("%f", &venda);
    if (venda >= 100000) {
        comm=700+venda*0.16;
    } else if (venda>=80000) {
        comm=650+venda*0.14;
    } else if (venda >= 60000) {
        comm = 600 + venda * 0.14;
    } else if (venda >= 40000) {
        comm = 550 + venda * 0.14;
    } else if (venda >= 20000) {
        comm = 500 + venda * 0.14;
    } else {
        comm = 400 + venda * 0.14;
    }
    printf("a comissao do vendedor eh: %f", comm);
*/

/* EX037
    int hora_chegada, minuto_chegada, hora_partida, minuto_partida, tempo_chegada, tempo_partida, tempo_permanencia, horas_permanencia;
    float total_pagar = 0;

    printf("Digite as horas e minutos da chegada: ");
    scanf("%d %d", &hora_chegada, &minuto_chegada);

    printf("Digite as horas e minutos da partida: ");
    scanf("%d %d", &hora_partida, &minuto_partida);

    if (hora_chegada > hora_partida) hora_chegada -= 24;

    tempo_chegada = hora_chegada * 60 + minuto_chegada;
    tempo_partida = hora_partida * 60 + minuto_partida;
    tempo_permanencia = tempo_partida - tempo_chegada;

    if (tempo_permanencia % 60 > 0) {
        horas_permanencia = tempo_permanencia / 60 + 1;
    } else {
        horas_permanencia = tempo_permanencia / 60;
    }

    if (horas_permanencia <= 2) {
        total_pagar = horas_permanencia * 1;
    } else if (horas_permanencia <= 4) {
        total_pagar = horas_permanencia * 1.4;
    } else {
        total_pagar = horas_permanencia * 2;
    }

    printf("O total a pagar e de R$%.2f", total_pagar);
*/

/* EX038
    const int anohj=2022;
    int dia, mes, ano;
    printf("digite o dia em que voce nasceu: ");
    scanf("%d", &dia);
    printf("digite o mes em q voce nasceu (numero): ");
    scanf("%d", &mes);
    printf("agora digite o ano em que voce nasceu: ");
    scanf("%d", &ano);

    if(ano>anohj){
        printf("ano invalido.");
    }else if((mes<1)||(mes>12)){
        printf("mes invalido.");
    }else if(dia<1){
        printf("dia invalido.");
    }
    switch(mes){
        case 2 :
            if(dia>28){
                printf("dia invalido");
                break;
            }else break;
        case 4 :
            if(dia>30){
                printf("data invalida");
                break;
            }else break;
        case 6 :
            if(dia>30){
                printf("data invalida");
                break;
            }else break;
        case 9 :
            if(dia>30){
                printf("data invalida");
                break;
            }else break;
        case 11 :
            if(dia>30){
                printf("data invalida");
                break;
            }else break;
    default:
        printf("\ndata valida");
    }
*/

/* EX039
    float salario, reajuste, bonus;
    int tempo;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario);

    printf("Digite o tempo de serviço do funcionário (em anos): ");
    scanf("%d", &tempo);

    if (salario <= 500.0) reajuste = 0.25;
    else if (salario <= 1000.0) reajuste = 0.20;
    else if (salario <= 1500.0) reajuste = 0.15;
    else if (salario <= 2000.0) reajuste = 0.10;
    else reajuste = 0.0;

    if (tempo < 1) bonus = 0.0;
    else if (tempo <= 3) bonus = 100.0;
    else if (tempo <= 6) bonus = 200.0;
    else if (tempo <= 10) bonus = 300.0;
    else bonus = 500.0;

    printf("O salário reajustado e: %f", salario * (1 + reajuste) + bonus);
*/

/*
     float custofab, custocons, comm, imp;
    printf("Digite o custo de fabrica: ");
    scanf("%f", &custofab);

    if (custofab<=12000) comm=0.05;
    else if (custofab<=25000) comm= 0.1;
    else comm=0.15;

    if (custofab<=12000) imp= 0;
    else if (custofab<=25000) imp=0.15;
    else imp=0.2;

    custocons=custofab*(1+comm+imp);

    printf("O custo ao consumidor eh: %f", custocons);
*/



    return 0;
}
