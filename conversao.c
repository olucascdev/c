#include <stdio.h>

int main(){

float metros, deci, centi, mili;

printf("Digite o valor em metros: ");
scanf("%f", &metros);

deci= metros * 10;
centi = metros * 100;
mili = metros * 1000;

printf("decimentros =%.2f\n centimetros = %f\n milimetros = %f ", deci, centi, mili );






return 0;


}