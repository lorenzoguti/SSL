#include<stdio.h>
/*Imprime la tabla de temperaturas */

int main()
{
    int fahr,celsius;
    int lower,upper,step;

    lower = 0; /*Limite inferior de la tabla */
    upper = 300; /*Limite superior de la tabla */
    step = 20; /*Tama�o del incremento */

    fahr = lower;
    while (fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
