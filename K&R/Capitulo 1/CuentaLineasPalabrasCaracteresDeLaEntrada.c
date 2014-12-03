#include<stdio.h>

#define IN 1 /*¨en una palabra */
#define OUT 0 /*fuera de una palabra */

/*Cuenta lineas,palabras, y caracteres de la entrada */
main()
{
    int c,ni,nw,nc,state;
    state = OUT;
    ni = nw = nc = 0;

    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n')
            ++ni;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }

    printf("Las lineas son: %d\nLos palabras son: %d\nLos caracteres son: %d\n", ni, nw, nc);

    return 0;
}
