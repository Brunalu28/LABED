#include <stdio.h>
#include <string.h>

int main(void) {
  int vetor[8];

  for(int i = 0; i < 8; i++){
    scanf("%d", &vetor[i]);
  }

  int num;

  scanf("%d", &num);

  for(int i = 0; i < 8; i++){
    if (num == vetor[i])
      printf("Posição do vetor: %d", i)
  }

}
