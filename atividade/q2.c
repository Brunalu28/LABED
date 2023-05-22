// #include <stdio.h>
// #include <string.h>

// int main(void) {
//   char localizacao[10], l1[10] = "acima", l2[10] = "abaixo";
//   scanf("%s", localizacao);

//   int limiar, ordem;
//   scanf("%d", &limiar);
//   scanf("%d", &ordem);

//   int soma = 0;

//   int matriz[ordem][ordem];

//   for (int i = 0; i < ordem; i++) {
//     for (int j = 0; j < ordem; j++) {
//       if (strcmp(localizacao, l1) == 0) {
//         scanf("%d", &matriz[i][j]);
//         if (i > j) {
//           soma += matriz[i][j];
//         }
//       } else if (strcmp(localizacao, l2) == 0) {
//         scanf("%d", &matriz[i][j]);
//         if (i < j) {
//           soma += matriz[i][j];
//         }
//       }
//     }
//   }
//   if (limiar > soma) {
//     printf("Falso");
//   } else if (limiar < soma) {
//     printf("Verdade");
//   }
// }
