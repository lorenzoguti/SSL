#include<stdio.h>

int imprimirTabla(int lower,int upper,int step,int fahr);

main()
{
    int fahr,celsius;
    int lower,upper,step;

    lower = 0; /*Limite inferior de la tabla */
    upper = 300; /*Limite superior de la tabla */
    step = 20; /*Tamaño del incremento */

    fahr = lower;

    while (fahr <= upper){
        fahr = fahr + step;
        printf("%d\t%d\n",fahr,imprimirTabla(lower,upper,step,fahr));
    }

    return 0;
}

int imprimirTabla(int lower,int upper,int step,int fahr)
{
    int cel,fahren;
    fahren = fahr;
    cel = 5 * (fahren - 32) / 9;
    fahren = fahren + step;
    return cel;

}
