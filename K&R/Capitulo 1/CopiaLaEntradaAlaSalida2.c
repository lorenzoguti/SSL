#include<stdio.h>

/*Copia la entrada a la salida; 2a version */

main()
{
    int c;

    while((c = getchar()) != EOF)
        putchar(c);

    return 0;
}
