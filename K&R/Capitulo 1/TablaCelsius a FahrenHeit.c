#include<stdio.h>

/*Imprime la tabla Celsius-Fahrenheit, version de punto flotante */
int main()
{
    float fahrenheit,celsius,lower;
    int upper,step;

    lower = -17.8;
    upper = 37;
    step = 11;

    printf("Encabezado de conversion de temperaturas.\n");

    celsius = lower;
    while (celsius <= upper){
        fahrenheit = (9.0/5.0)*(celsius + 17.8);
        printf("%3.1f%6.0f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
return 0;
}

