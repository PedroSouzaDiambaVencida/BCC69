#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* EX001
int main()
{
    char strUser[200];

    printf("digite uma frase: ");
    fgets(strUser, 200, stdin);

    printf("\n\n%s", strUser);

    return 0;
}*/

/* EX002
int main(){
    int contador=0;
    char string[200];
    char user;

    printf("digite a string: ");
    fgets(string, 200, stdin);

    printf("agora digite o caracter nessa string que voce deseja contar: ");
    scanf("%c", &user);

    for(int i = 0; i < strlen(string); i++){
        if(string[i] == user)
            contador++;
    }
    printf("o numero de vezes que o caracter %c aparece na string eh %d", user, contador);

    return 0;
}*/

/* EX003
int main (){
    char strng[200];
    int i;
    int tam;

    printf("insira uma palavra: ");
    fgets(strng, 200, stdin);

    tam = strlen(strng);

    printf("a palavra quando invertida eh:\n");

    for(i = tam; i >= 0; i--){
        printf("%c", strng[i]);
    }
    return 0;
}*/

/* EX004
        int main () {
            char str[50], caractere;
            int i, vogal=0;

            printf ("Apresente uma palavra: ");
            fgets (str, 50, stdin);

            for(i=0; i<strlen(str); i++) {
                 if( (str[i]=='a')||(str[i]=='i')||(str[i]=='e')||(str[i]=='o')||(str[i]=='u') ) {

                    vogal++;

             }  else if ( (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U') ) {

                vogal++;
             }
            }
                printf ("A quantidade de vogais eh: %d", vogal);

                printf("\nApresente um caractere: ");
                scanf("%c", &caractere);

                 for(i=0; i<strlen(str); i++) {
                 if( (str[i]=='a')||(str[i]=='i')||(str[i]=='e')||(str[i]=='o')||(str[i]=='u') ) {
                        str[i]=caractere;

             }  else if ( (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U') ) {

                str[i]=caractere;
             }
            }

            printf("Toda vogal da string apresentada foi substituida pelo caractere '%c', e agora a string eh: \n ", caractere);
            printf("%s", str);


            return 0;
}

/* EX005
int main()
{
    char STRusuario[200];

    printf("digite alguma coisa: ");
    fgets(STRusuario, 200, stdin);

    printf("%s", strlwr(STRusuario));

    return 0;
}*/

/* EX006
int main()
{
    char STRusuario2[200];

    printf("digite alguma coisa: ");
    fgets(STRusuario2, 200, stdin);

    printf("%s", strupr(STRusuario2));

    return 0;


    eu sou marcel => eusoum

}*/

/* EX007
int main() {
    char string[101];
    int posicao = 0;

    printf("Forneca uma string com espacos em branco: ");
    fgets(string, sizeof(string), stdin);

    int len = strlen(string);

    printf("%s\n", string);
    for (int i = 0; i < len; i++) {
        if (string[i] == ' ') continue;
        string[posicao] = string[i];
        posicao++;
    }
    string[posicao] = '\0';
    printf("String sem espaços em branco: %s\n", string);
}*/

/* EX008
int main() {
    char strUS[200];
    char letra1, letra2;
    int i;
    printf("digite uma frase de efeito: ");
    fgets(strUS, sizeof(strUS), stdin);

    printf("agora digite uma letra A nessa frase que ira substituir uma letra B:\n");
    printf("Letra A: \n");
    scanf(" %c", &letra1);
    printf("Agora a letra B que sera substituida: ");
    scanf(" %c", &letra2);
    int len = strlen(strUS);
    for(i = 0; i < len; i++){
        if(strUS[i]==letra2){
                strUS[i] = letra2;
                strUS[i] = letra1;
            }else continue;
    }
    printf("resultado\n");
    puts(strUS);

    return 0;
}*/

/* EX009
int main() {
    char carros[5][20];
    int consumo[5];
    int eco, calc;
    for(int i = 0; i < 5; i++)
    {
        printf("Digite o nome do carro: ");
        scanf(" %s", carros[i]);
        printf("Digite quantos km/l o carro faz: ");
        scanf("%d", &consumo[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        if(i == 0)
        {
            eco = i;
        }
        else if (consumo[i] > consumo[eco])
        {
            eco = i;
        }
    }

    for(int i = 0; i < 5; i++)
    {
        calc = 1000/(consumo[i]);
        printf("O %s faz %d km por litro. Em 1000km, consome %d litros.\n", carros[i], consumo[i], calc);
    }
    printf("O carro mais economico foi %s, consome %d litros por km.", carros[eco], consumo[eco]);
    return 0;
}*/

/* EX010
int main() {
    char prod[50];
    int prec;
    int precDis, vista;
    char simounao;

    printf("insira o nome do produto desejado: ");
    fgets(prod, sizeof(prod), stdin);
    fflush(stdin);
    printf("agora insira o preco do produto: ");
    scanf("%d", &prec);

    precDis = (10 * prec)/100;
    vista = prec - precDis;

    printf("O produto %s tem o preco %d, porem recebe um disconto de 10%% ja que foi comprado a vista, logo voce paga menos %d reais, entao o preco final fica como: %d", prod, prec, precDis, vista);

    return 0;
}*/

/* EX011
int main() {

    char string[50];
    int NumI, NumJ;

    printf("insira uma string: ");
    fgets(string, sizeof(string), stdin);
    printf("agora digite um numero inteiro nao negativo: ");
    scanf("%d", &NumI);
    printf("agora digite um segundo numero inteiro nao negativo: ");
    scanf("%d", &NumJ);

    for(NumI; NumI < NumJ; NumI++){
        for(int i = 0; i < NumJ; i++){
        }
        printf("\n%s[%d]", string, NumI);
    }
    printf("\n%s[%d]", string, NumJ);

    return 0;
}*/

/* EX012
void main()
{
  char str[100];
  int i;

  fgets(str, 100, stdin);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = (str[i] - 'A' + 3) % 26 + 'A';
    }
    else if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = (str[i] - 'a' + 3) % 26 + 'a';
    }
  }
  printf("%s", str);
}*/

/* EX013
int main(){
    char palavra[30];
    int i, tam, diferentes = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);
    tam--;
    i = 0;
    while(tam >= i){
        if(palavra[i] != palavra[tam])
            diferentes ++;
        i++;
        tam--;
    }

    if(diferentes == 0)
        printf("Eh palindromo!");
    else
        printf("Nao eh palindromo...");

    return 0;
}*/

/* EX014
void main()
{
  char str1[100], str2[100];
  int i, j, n;

  fgets(str1, 100, stdin);
  fgets(str2, 100, stdin);
  scanf("%d", &n);
  for (i = 0; str1[i] != '\0'; i++)
  {
  }
  for (j = 0; j < n; j++)
  {
    str1[i + j] = str2[j];
  }
  str1[i + j] = '\0';
  printf("%s", str1);
}*/

/* EX015
void main()
{
  char str1[20], str2[20], c1, c2, op, substring[20];
  int i, count = 0, pos, tam;

  do
  {
    printf("\n(a) Ler uma string S1 (tamanho máximo 20 caracteres);\n");
    printf("(b) Imprimir o tamanho da string S1;\n");
    printf("(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;\n");
    printf("(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;\n");
    printf("(e) Imprimir a string S1 de forma reversa;\n");
    printf("(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;\n");
    printf("(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;\n");
    printf("(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;\n");
    printf("(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a substring e qual é o tamanho da substring.\n");
    printf("Digite a opção desejada:\n");
    scanf("%c", &op);
    getchar();

    switch (op)
    {
    case 'a':
      printf("\nDigite a string S1:\n");
      fgets(str1, 20, stdin);
      str1[strlen(str1) - 1] = '\0';
      break;
    case 'b':
      printf("O tamanho da string S1 é %d\n", strlen(str1));
      break;
    case 'c':
      printf("\nDigite a string S2: ");
      fgets(str2, 20, stdin);
      printf(strcmp(str1, str2) ? "As strings sao diferentes\n" : "As strings sao iguais\n");
      break;
    case 'd':
      printf("\nDigite a string S2: ");
      fgets(str2, 20, stdin);
      printf("O resultado da concatenação é \"%s\"\n", strcat(str1, str2));
      break;
    case 'e':
      for (i = strlen(str1) - 1; i >= 0; i--)
      {
        printf("%c", str1[i]);
      }
      printf("\n");
      break;
    case 'f':
      printf("\nDigite o caractere: ");
      scanf(" %c", &c1);
      for (i = 0; str1[i] != '\0'; i++)
      {
        if (str1[i] == c1)
        {
          count++;
        }
      }
      printf("\nO caractere %c aparece %d vezes na string S1\n", c1, count);
      break;
    case 'g':
      printf("\nDigite o caractere C1: ");
      scanf(" %c", &c1);
      printf("\nDigite o caractere C2: ");
      scanf(" %c", &c2);
      for (i = 0; str1[i] != '\0'; i++)
      {
        if (str1[i] == c1)
        {
          str1[i] = c2;
          break;
        }
      }
      printf("A string S1 agora é %s\n", str1);
      break;
    case 'h':
      printf("\nDigite a string S2: ");
      fgets(str2, 20, stdin);
      if (strstr(str1, str2) != NULL)
      {
        printf("A string S2 é substring de S1\n");
      }
      else
      {
        printf("A string S2 não é substring de S1\n");
      }
      break;
    case 'i':
      printf("\nDigite a posição: ");
      scanf("%d", &pos);
      printf("\nDigite o tamanho: ");
      scanf("%d", &tam);

      for (i = pos; i <= tam; i++)
      {
        substring[i] = str1[pos + i];
      }
      substring[i + 1] = '\0';

      printf("A substring é %s\n", substring);
      break;
    }
  } while (op >= 'a' || op <= 'i');
}*/

/* EX016
void main()
{
  char str[1000];
  int i, j, prod, max_prod = 0;

  fgets(str, 1000, stdin);

  for (i = 0; str[i + 4] != '\0' && str[i + 4] != '\n'; i++)
  {
    prod = 1;
    for (j = i; j < i + 5; j++)
    {
      prod *= (str[j] - 48);
    }
    if (prod > max_prod)
    {
      max_prod = prod;
    }
  }
  printf("O maior produto é %d\n", max_prod);
}*/
