#include<stdio.h>

/*Cuenta los caracteres de la entrada; 1° Version */

main ()
{
    long nc;

    nc = 0;
    while(getchar()!= EOF)
        ++nc;
    printf("%1d\n",nc);

    return 0;
}
