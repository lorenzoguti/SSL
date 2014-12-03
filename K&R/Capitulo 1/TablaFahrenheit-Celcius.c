#include<stdio.h>
/*Imprime la taba de Fahrenheit-Celsius para fahr=0,20...,300 */

int main()
{
int fahr,celsius;
int lower,upper,step;

lower = 0; /*Limite inferior de la tabla de temperaturas */
upper = 300; /*Limite superior de la tabla de temperaturas */
step = 20; /*Tamaño del incremento */

fahr = lower;
while(fahr <= upper ){
    celsius = 5 *(fahr -32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
}

return 0;
}
