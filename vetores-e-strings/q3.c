// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//   int vn[30], maior = 0, menor = 0;

//   for(int i = 0; i < 30; i++){
//     vn[i] = rand() % 50;
//     if (vn[i] > maior){
//       maior = vn[i];
//     }
//     if (menor == 0){
//       menor = vn[i];
//     } else if (vn[i] < menor){
//       menor = vn[i];
//     }
//   }
//   for(int j = 0; j < 30; j++){
//     printf("%d ", vn[j]);
//   }
//   printf("\nMaior valor: %d\n", maior);
//   printf("Menor valor: %d", menor);
// }