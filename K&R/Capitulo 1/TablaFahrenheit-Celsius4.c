#include<stdio.h>
/*Con constantes Simbolicas */

#define LOWER 0 /*Limite inferior de la tabla */
#define UPPER 300 /*Limite superior */
#define STEP 20    /*tamaño del incremento */

int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32) );

    return 0;
}
