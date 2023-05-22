#include "functions.h"
#include <math.h>

void printVetor(int len, int vetor[]) {
  for (int i = 0; i < len; i++) {
    printf("%d\n", vetor[i]);
  }
}
void printMatriz(int len, int matriz[len][len]){
  printf("\n");
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}