#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* EX001
int main()
{
    int i;
    int soma, A[6] = {1,0,5,-2,-5,7};

    soma = A[0]+A[1]+A[5];

    printf("a soma eh: %d\n", soma);

    A[4] = 100;

    for(i = 0; i < 6; i++)
        printf("os valores sao: %d\n", A[i]);

    return 0;
} */

/* EX002
    int vet[8];
    int i, x, y;
    int j=0;
    int soma;

    for(i=0; i<8; i++){
            printf("digite o valor dentro do %d vetor: ", j+1);
            scanf("%d", &vet[i]);
        }
    printf("agora digite a posi��o do vetor que voce deseja somar: ");
    scanf("%d", &x);
    printf("agora a do outro: ");
    scanf("%d", &y);

    if ((x>8)||(y>8)){
        printf("posicoes invalidas.");
        return 0;
    }else
        y-=1, x-=1;
        soma = vet[y] + vet[x];
        printf("o resultado eh: %d", soma);

return 0;
}
*/

/* EX003
int main(){

    int i, vet[6];
   printf("Digite 6 numeros inteiros.\n");

   for(i=0; i<6; i++) {
    printf("Digite o %d valor: ", (i+1));
    scanf("%d", &vet[i]);
   }

   printf("Resultado:\n");
   for(i=5; i>=0; i--) {
    printf("%d\n", vet[i]);
   }
   return 0;
}*/

/* EX004
int main () {
    int i, vetor[5], maior=vetor[0], menor, PosicaoMaior, PosicaoMenor=0;
    for (i=0; i<5; i++) {
        printf ("Apresente um valor para a posicao %d de um vetor: \n", i);
        scanf ("%d", &vetor[i]);
    }
    for (i=0; i<5; i++) {
        if (maior< vetor[i]) {
            maior=vetor[i];
            PosicaoMaior=i;
        }
    }
    menor= vetor[0];
    for (i=1; i<5; i++) {
        if (menor>vetor[i]) {
            menor= vetor[i];
            PosicaoMenor=i;
        }
    }


    for (i=0; i<5; i++) {
        printf ("\n%d", vetor[i]);
    }
    printf ("\nO maior valor eh: %d\nA posicao eh: %d", maior, PosicaoMaior);
    printf("\nO menor valor eh: %d\nA posicao eh: %d", menor, PosicaoMenor);


return 0;
}*/

/* EX005
int main (void){

    int vetorr[50];
    int i;

    for(i=0; i<50; i++){
        vetorr[i] = (i + 5 * i) % (i + 1);
        printf("%d\n", vetorr[i]);
    }
return 0;
}*/

/* EX006
int main()
{
    int n[10] = {13,24,15,22,11,
                  19,18,23,25,47,};
    int d,i,limite;
    int verifica;


    verifica=1;

    for(i=0; i<10 ;i++)
    {
        if (n[i] > 1) {
            d = 2;
            verifica = 1;
            limite = sqrt(n[i]);
            while(verifica && d <= limite)
             {

                if (n[i] % d  == 0){

                    verifica = 0;
                }

                d++;
             }

            if (verifica)
                printf("O numero %d, na posicao: n[%d] eh primo.\n", n[i],i);
        }
    }
    return 0;
}
*/

/* EX007
int main(void)
{
  int A[6];
  for (int i = 0; i < 6; i++)
  {
    printf("Digite o %d� valor: ", i + 1);
    scanf("%d", &A[i]);
  }
  int soma_pares = 0;
  int qtd_impares = 0;
  for (int i = 0; i < 6; i++)
  {
    if (A[i] % 2 == 0)
    {
      printf("Par: %d\n", A[i]);
      soma_pares += A[i];
    }
    else
    {
      printf("�mpar: %d\n", A[i]);
      qtd_impares++;
    }
  }
  printf("Soma dos pares: %d\n", soma_pares);
  printf("Quantidade de �mpares: %d\n", qtd_impares);
  return 0;
} */

/* EX008
int main () {
    int vetor[10], i,verf;

    for (i=0; i<10; i++) {
        printf ("Apresente um numero: ");
        scanf("%d", &vetor[i]);

      for (verf=0; verf<i; verf++) {
        if(vetor[i]==vetor[verf]) {
            printf("\nNumero repetido. ");
            i--;
        }

      }
    }
    printf ("\nO vetor apresentado foi: ");
        for (i=0; i<10; i++) {
            printf("\n%d", vetor[i]);
        }

    return 0;

}*/

//MATRIZES

/* EX001
int main (){
    int mat1[4][4];
    int maiorq = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
                printf("digite o valor dos vetores [%d][%d]: ", i , j );
                scanf("%d", &mat1[i][j]);
                if(mat1[i][j] > 10){
                        maiorq++;
                }
        }

    }if(maiorq == 0){
        printf("nao existe nenhum numero maior que zero.");
    }else
        printf("essa matriz possui %d numeros maiores que dez.", maiorq);


    return 0;
}*/

/* EX002
int main(void)
{
  int A[5][5];

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (i == j)
      {
        A[i][j] = 1;
      }
      else
      {
        A[i][j] = 0;
      }
    }
  }
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  return 0;
}*/

/* EX003
int main(void)
{
  int A[4][4];
  int maior = 0;
  int linha = 0;
  int coluna = 0;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("Digite o valor da linha %d e coluna %d: ", i + 1, j + 1);
      scanf("%d", &A[i][j]);
      if (A[i][j] > maior)
      {
        maior = A[i][j];
        linha = i;
        coluna = j;
      }
    }
  }
  printf("Maior: %d\n", maior);
  printf("Linha: %d\n", linha);
  printf("Coluna: %d\n", coluna);
  return 0;
}*/

/*  EX004
int main(void)
{
  int A[5][5];
  int X;
  int linha = 0;
  int coluna = 0;
  int found = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("Digite o valor da linha %d e coluna %d: ", i + 1, j + 1);
      scanf("%d", &A[i][j]);
    }
  }
  printf("Digite X: ");
  scanf("%d", &X);
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (A[i][j] == X)
      {
        linha = i;
        coluna = j;
        found = 1;
      }
    }
  }
  if (found)
  {
    printf("Linha: %d\n", linha);
    printf("Coluna: %d\n", coluna);
  }
  else
  {
    printf("N�o encontrado\n");
  }
  return 0;
}*/

/* EX005
int main(void)
{
  int A[10][10];
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (i < j)
      {
        A[i][j] = 2 * i + 7 * j - 2;
      }
      else if (i == j)
      {
        A[i][j] = 3 * i * i - 1;
      }
      else
      {
        A[i][j] = 4 * i * i * i - 5 * j * j + 1;
      }
    }
  }
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  return 0;
}*/

/* EX008
int main(void){
    int vetu[2][2];
    int res, constante;
    int opt;
    int veta[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("digite os valores dentro da matriz A: ");
            scanf("%d", &vetu[i][j]);
        }
    }
      for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Digite o valor dentro da matriz B: ");
            scanf("%d", &veta[i][j]);
        }
    }

    printf("agora, escolha uma opcao:");
    printf("(1)somar as duas matrizes\n(2)subtrair a primeira matriz da segunda\n");
    printf("(3)adicionar uma constante �s duas matrizes\n(4)imprimir as matrizes");
    printf("sua opcao: ");
    scanf("%d", &opt);

    switch(opt){
    case 1 :
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
            res = vetu[i][j] + veta [i][j];
            }
        }
        printf("a soma eh: %d", res);
        break;

    case 2 :
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
            res = vetu[i][j] - veta [i][j];
            }
        }
        printf("a subtracao eh: %d", res);
        break;

    case 3 :
        printf("Digite a constante: ");
        scanf("%d", &constante);
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
            printf("%d ", vetu[i][j] + constante);
      }
      printf("\n");
    }
    for (int i = 0; i < 2; i++){
      for (int j = 0; j < 2; j++){
        printf("%d ", veta[i][j] + constante);
      }
      printf("\n");
    }
        break;

    case 4 :
            for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", vetu[i][j]);
      }
      printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", veta[i][j]);
      }
      printf("\n");
    }
    break;

    default:
        printf("opcao invalida.");
    }

    return 0;
}*/
