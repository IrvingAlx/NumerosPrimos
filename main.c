#include <stdio.h>
int main() {
  int i, numeroPrimo, cont, contPrimos = 0, maxPrimos;
  printf("Ingrese cuantos unermos primos quiere saber: \n");
  scanf(" %d", &maxPrimos);

  for (numeroPrimo = 2; contPrimos < maxPrimos; numeroPrimo++) {
    cont = 0;
    for (i = 2; i <= numeroPrimo / 2; i++) {
      if (numeroPrimo % i == 0) {
        cont++;
      }
    }
    if (cont == 0) {
      printf(" %d \n", numeroPrimo);
      contPrimos++;
    }
  }
  return 0;
}