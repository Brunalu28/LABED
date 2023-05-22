// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>

// int main(void) {
//   char car[10], car2[10] = "n";
//   int ano, maiorvel =0, maiorano =0, cont = 0;
//   float velo, velmedia =0;

//   while (1) {
//     scanf("%c", car);
//     if (strcmp(car, car2) == 0) {
//       printf("zero"); break;
//     } else {
//       scanf("%d", &ano);
//       scanf("%f", &velo);
//       if (ano > maiorano){
//         maiorano = ano;
//       }
//       if (velo > maiorvel){
//         maiorvel = velo;
//       }
//       velmedia += velo;
//       cont++;
//     }
//   }
//   printf("Maior velocidade: %d", maiorvel);
//   printf("Maior ano: %d", maiorano);
//   printf("velocidade média: %f", (velmedia/cont));
// }
