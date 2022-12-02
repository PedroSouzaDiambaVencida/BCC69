#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cebolinha;
    char string[500];
    char dest[500];
    int i,j, quan;

    printf("*****FALE COMO O CEBOLINHA****\n");
    printf("insira uma frase: ");
    fgets(string, 500, stdin);

    quan = strlen(string);

    for(i = 0; i < quan; i++){
    if(string[i] == 'r' && string[i+1] >= 'a' && string[i+1] <= 'z'){
      cebolinha = 'l';
      if(string[i+1] == 'r')
        i++;
    }
    else
      cebolinha = string[i];

    dest[j] = cebolinha;
    j++;
  }
  dest[j] = '\0';

  printf("\n%s\n", dest);

  return 0;
}
