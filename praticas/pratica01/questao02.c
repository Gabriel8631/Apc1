#include <stdio.h>

int main(){
  float base = 0;
  float altura = 0;
  float area = 0;
    printf("Qual a base do triangulo?\n");
    scanf("%f", &base);
    printf("Qual a altura do triangulo?\n");
    scanf("%f", &altura);
  area = (base * altura)/2.0f;
  printf("A base é %f\n", area);
  return 0;
}