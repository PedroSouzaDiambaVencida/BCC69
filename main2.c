#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* EX001
int dobro(num)
{
    int res;
    res=num*2;

    return res;
}

int main()
{
    int num, res;

    printf("insira um numero: ");
    scanf("%d", &num);
    res=dobro(num);
    printf("o dobro desse numero eh %d", res);

    return 0;
}
*/

/* EX002
int data(int dia, int mes, int ano)
{
    switch (mes)
    {
    case 1:
        printf("%d de Janeiro de %d\n", dia, ano);
        break;
    case 2:
        printf("%d de Fevereiro de %d\n", dia, ano);
        break;

    case 3:
        printf("%d de Marco de %d\n", dia, ano);
        break;

    case 4:
        printf("%d de Abril de %d\n", dia, ano);
        break;

    case 5:
        printf("%d de Maio de %d\n", dia, ano);
        break;


    case 6:
        printf("%d de Junho de %d\n", dia, ano);
        break;

    case 7:
        printf("%d de Julho de %d\n", dia, ano);
        break;

    case 8:
        printf("%d de Agosto de %d\n", dia, ano);
        break;

    case 9:
        printf("%d de Setembro de %d\n", dia, ano);
        break;

    case 10:
        printf("%d de Outubro de %d\n", dia, ano);
        break;

    case 11:
        printf("%d de Novembro de %d\n", dia, ano);
        break;

    case 12:
        printf("%d de Dezembro de %d\n", dia, ano);
        break;

    default:
        printf("Desculpe, eu n�o entendi")
        break;
    }
}
int main()
{
    int dia, mes, ano;
    char barra;
    printf("Digite uma data para ve-la por extenso: \n");
    scanf("%d %c %d %c %d", &dia, &barra, &mes, &barra, &ano);
    data(dia, mes, ano);
}
*/



/* EX003
int ehpositivo (num);

int main()
{
    int nume;

    printf("insira um numero: ");
    scanf("%d", &nume);

    printf("o numero eh: ");

    if(ehpositivo(nume) == 1){
        printf("positivo");
    }if(ehpositivo(nume) == 0){
        printf("zero");
    }else if(ehpositivo(nume) == -1){
        printf("negativo");
    }

    return 0;
}

int ehpositivo (int nume){
    if(nume>=1){
        return 1;
    }else if(nume==0){
        return 0;
    }else if(nume<0){
        return -1;
    }

}
*/


/* EX004
int EhQuadradoPerfeito(int number){
    int PrimVar;
    float SegVar;

    PrimVar = sqrt(number);
    SegVar = sqrt(number);

    if (PrimVar == SegVar) return 1;
    else return 0;

}

int main (){
    int number;

    printf("insira um numero: ");
    scanf("%d", &number);

    if(EhQuadradoPerfeito(number))
        printf("o numero eh um quadrado perfeito.");
    else
        printf("o numnero nao eh um quadrado perfeito");

    return 0;
}
*/


/* EX005
float calcula_volume(float raio){
    float pi = 3.1415;
    return (4/3)* pi * pow(raio,3);
}

int main(){
    float raio;

    printf("Entre com o raio da esfera: ");
    scanf("%f", &raio);
    printf("Volume da esfera: %f", calcula_volume(raio));

    return 0;
}
*/




/* EX006
float conversaoSegundos (float horas, float minutos, float segundos)
{
        float seconds;

		seconds=(segundos+(minutos*60)+(horas*60*60));

    return seconds;
}


int main(){

    float horas, minutos, segundos, seconds;

    printf("insira as horas: ");
    scanf("%f", &horas);
    printf("agora os minutos: ");
    scanf("%f", &minutos);
    printf("segundos: ");
    scanf("%f", &segundos);

    seconds = conversaoSegundos(horas, minutos, segundos);

    printf("os valores inseridos convertidos em segundos e somados sao: %f", seconds);

    return 0;
}
*/


/* EX007
float conversaoParaFahrenheit(float grausC)
{
    float GrausF;
    GrausF = grausC * (9.0/5.0) + 32.0;
    return GrausF;
}

int main (){
    float grausC, GrausF;

    printf("insira uma temperatura em graus celcius: ");
    scanf("%f", &grausC);

    GrausF = conversaoParaFahrenheit(grausC);

    printf("a temperatura convertida para graus Fahrenheit eh: %f", GrausF);

    return 0;
}
*/



/* EX008
float ValorDaHipotenusa (float CatetoA, float CatetoB){

    int hipotenusa;

    hipotenusa = sqrt (pow(CatetoA,2) + pow(CatetoB, 2));

    return hipotenusa;
}

int main (){
    float CatetoA, CatetoB;
    int hipotenusa;

    printf("insira o valor do cateto de um triangulo: ");
    scanf("%f", &CatetoA);
    printf("agora insira o valor do outro cateto desse triangulo: ");
    scanf("%f", &CatetoB);

    hipotenusa = ValorDaHipotenusa(CatetoA, CatetoB);

    printf("a hipotenusa desse triangulo eh: %d", hipotenusa);
}
*/


/* EX009
float VolumeDoCilindro (float altura, float raio){
    const float pi = 3.141592;
    float vol;

    vol = pi * pow(raio, 2) * altura;

    return vol;
}

int main (){
    float raio, altura, vol;

    printf("insira o raio do cilindro: ");
    scanf("%f", &raio);
    printf("agora insira a altura do cilindro: ");
    scanf("%f", &altura);

    vol = VolumeDoCilindro(altura, raio);

    printf("o volume do cilindro eh: %f", vol);

    return 0;
} */


/* EX010
float maior_valor(float a, float b)
{
    if(a > b) return a;
    else return b;
}


int main()
{
       float  a, b;

       printf("insira o primeiro numero: ");
       scanf("%f", &a);

       printf("insira o segundo numero: ");
       scanf("%f", &b);

       printf("\nO maior valor entre eles eh: %.3f", maior_valor(a,b));

    return 0;
}
*/

/* EX011
float media_tres_notas (float nota1, float nota2, float nota3, char opc);

int main (){
    float nota1, nota2, nota3, res;
    char opc;

    printf("escolha uma opcao (A=media aritimetica e P=media ponderada): ");
    scanf("%c", &opc);
    printf("digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("a terceira nota: ");
    scanf("%f", &nota3);

    res = media_tres_notas(nota1, nota2, nota3, opc);

    printf("a media eh: %f", res);

    return 0;
}

float media_tres_notas(float nota1, float nota2, float nota3, char opc){

    if ((opc == 'A') || (opc == 'a')) {
        return (nota1 + nota2 + nota3) / 3;
    } else if ((opc == 'P') || (opc == 'p')) {
        return (nota1*5 + nota2*3 + nota3*2) / 10;
    }
}
*/


/* EX012
int soma_de_algarismos (int num, int soma);

int main (){
    int num, soma=0;

    printf("insira um numero inteiro: ");
    scanf("%d", &num);

    soma=soma_de_algarismos(num, soma);

    printf("a soma dos algarismos eh: %d", soma);

    return 0;
}

int soma_de_algarismos (int num, int soma){

    if (num > 0)
    {
        while (num > 0)
        {
            soma += num % 10;
            num /= 10;
        }
        return soma;
    }

}*/

/* EX013
float calculadora (float num1, float num2, char ope);

int main (){
    float num1, num2, resu;
    char ope;

    printf("*calculadora basica*");
    printf("escolha uma op��o:\n soma = +\n subtracao = -\n multiplicacao = *\n divisao = / \n opcao: ");
    scanf("%c", &ope);
    printf("agora digite um valor para operacao: ");
    scanf("%f", &num1);
    printf("agora digite um outro valor para operacao: ");
    scanf("%f", &num2);

    printf("o resultado eh: %.1f", calculadora(num1, num2, ope));
}

float calculadora (float num1, float num2, char ope){

    float result = 0;

    result = (ope == '+') ? num1 + num2 : result;

    result = (ope == '-') ? num1 - num2 : result;

    result = (ope == '*') ? num1 * num2 : result;

    result = (ope == '/') ? num1 / num2 : result;

    return result;

}
*/


/* EX014
void msg (float consumo);

int main (){

    float consumo;

    printf("insira quantos litros de combustivel foram consumidos por cada km: ");
    scanf("%f", &consumo);

    msg(consumo);

}

void msg (float consumo){
    if(consumo<8){
        printf("venda o carro!");
    }else if((consumo>8)&&(consumo<=14)){
        printf("economico!");
    }else if(consumo>14)
        printf("super economico!");

}
*/

/* EX016
void desenha_linha (int numdelinhas);

int main (){

    int numdelinhas;

    printf("quantas linhas voce deseja imprimir? ");
    scanf("%d", &numdelinhas);

    desenha_linha(numdelinhas);
}

void desenha_linha (int numdelinhas){

    int conta;

    for(conta = 1; conta <= numdelinhas; conta++)
        printf("=");
}
*/

/* EX017
int SomaEntreEles (int num1, int num2);

int main (){

    int num1, num2, soma;
    do{
        printf("insira um numero positivo: ");
        scanf("%d", &num1);
        printf("agora insira outro numero positivo: ");
        scanf("%d", &num2);
    }while (num1>num2);

    if ((num1<=0)||(num2<=0)){
        printf("numeros sao negativos");
        return 0;
    }else
       soma = SomaEntreEles(num1, num2);

    printf("A soma dos numeros entre eles eh: %d", soma);

    return 0;
}

int SomaEntreEles (int num1, int num2){

    int contador, sum;

    for(contador = (num1 + 1); contador < num2; contador++)
        sum = sum + num1;
    return sum;
}*/

/* EX018
int exponiacao (int base1, int exp2);

int main (){

    int base1, exp2, res;

    printf("insira o primeiro valor pra base da exponenciacao: ");
    scanf("%d", &base1);
    printf("agora insira outro valor para expoente: ");
    scanf("%d", &exp2);

    res = exponiacao(base1, exp2);

    printf("a potencia eh: %d", res);

    return 0;
}

int exponiacao (int base1, int exp2){

    int power = 1 , cont ;

    for( cont = 1 ; cont <= exp2 ; cont++ ) {
        power = power * base1;
    }
    return power;
}
*/

/* EX019
int fatorial(int num){

    int cont, resul = 1;

    for (cont = 1; cont <= num; cont++)
        resul = resul * cont;

    return resul;
}

int main (){

    int num;

    printf("insira um valor para saber o fatorial: ")/
    scanf("%d", &num);

    printf("o fatorial desse numero eh: %d", fatorial(num));

    return 0;
}
*/

/* EX020
void main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", countPrimes(n));
}

int countPrimes(int n)
{
    int i, j, count = 0;

    for (i = 2; i < n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }

        if (j == i)
            count++;
    }

    return count;
}*/

/* EX021
void triangulo (int n);

int main (){

    int n;

    printf("insira um valor: ");
    scanf("%d", &n);


    triangulo(n);
}

void triangulo (int n){

    int cont;
    int exc;

    for(cont=1; cont <= n; cont++ ){

        for(exc=1; exc <= cont; exc++){
            printf("!");
        }
        printf("\n");
    }

}*/

//n�o existe ex 22

/* EX023
int triangle_create(int altura)
{
    int counter = 0,
        symbol,
        total_line,
        line = 1;

    total_line = 2 * altura - 1;

    while (line <= total_line)
    {

        counter = line <= altura ? counter + 1: counter - 1;

        for (symbol = 1; symbol <= counter; symbol++)
        {
            printf("*");
        }

        printf("\n");

        line++;
    }
}

int
main()
{
    int altura;

    printf("insira a altura do triangulo que sera criado: ");
    scanf("%d", &altura);

    triangle_create(altura);
}
*/

/* EX024
void printTriangle(int n);

void main()
{
    int n;
    printf("insira a altura da piramede: ");
    scanf("%d", &n);
    printTriangle(n);
}

void printTriangle(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}
*/
