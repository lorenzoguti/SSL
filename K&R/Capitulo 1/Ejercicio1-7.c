#include<stdio.h>

/*Ejercicio 1-6 verifique que la expresion getchar() != EOF es 0 o 1 */

main()
{
    int c;

    while(c = getchar()!= EOF){
        ;
    }

    printf("%d",c);

    return 0;
}

