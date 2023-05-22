// #include <stdio.h>

// int main(void) {
//   int qtdoces, peso, pesototal = 0, id = 0;
//   float preco, gastototal = 0.0;

//   printf("Informe o total de valores comprados: ");
//   scanf("%d", &qtdoces);

//   float maisb = 0.0;
//   for (int i = 1; i <= qtdoces; i++) {

//     printf("Doce %d: \n", i);
//     printf("Informe o Peso (g): ");
//     scanf("%d", &peso);
//     pesototal += peso;
//     printf("Informe o Preço (R$): ");
//     scanf("%f", &preco);
//     gastototal += preco;
//     if (maisb == 0) {
//       maisb = preco;
//     } else if (preco < maisb) {
//       maisb = preco;
//       id = i;
//     }

//     float prunitario = (preco * 1000) / peso;
//     printf("Preço unitário calculado = %.2f/kg\n", prunitario);
//   }
//   printf("Dados Finais da Compra: \n");
//   printf("Produto mais barato: Doce %d\n", id);
//   printf("Foram comprados %dg de doce por R$%.2f", pesototal, gastototal);
// }
