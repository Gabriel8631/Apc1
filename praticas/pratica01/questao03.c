#include <stdio.h>

int main(){
  float raio = 0;
  float constante_pi = 3.1416;
  float perimetro = 0;
    printf("Qual o raio da pizza?\n");
    scanf("%f", &raio);
  perimetro = (2 * constante_pi * raio);
  printf("O perimetro da pizza é %f\n", perimetro);
  return 0;
}