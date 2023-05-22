// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//   int matriz[10][10];

//   for (int i = 0; i < 10; i++) {
//     for (int j = 0; j < 10; j++) {
//       matriz[i][j] = rand() % 50;
//     }
//   }
//   printf("\n");
//   for (int i = 0; i < 10; i++) {
//     for (int j = 0; j < 10; j++) {
//       printf("%d ", matriz[i][j]);
//     }
//     printf("\n");
//   }
//   printf("\n");

//   int linha = 0, coluna = 0, maior = 0;

//   for (int i = 0; i < 10; i++) {
//     for (int j = 0; j < 10; j++) {
//       if (matriz[i][j] > maior) {
//         maior = matriz[i][j];
//         linha = i;
//         coluna = j;
//       }
//     }
//   }
//   printf("O maior valor dessa matriz é: %d, na linha %d e coluna %d", maior,
//          linha, coluna);
// }
