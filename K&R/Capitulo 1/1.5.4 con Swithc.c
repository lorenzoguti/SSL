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
            switch(c){
        case '\n':
            ++ni;
            break;
        case ' ':
        case '\t':
            state = OUT;
            break;
            }
            switch(state){
        case OUT:
            state = IN;
            ++nw;
            }
    }

    printf("Las lineas son: %d\nLos palabras son: %d\nLos caracteres son: %d\n", ni, nw, nc);
return 0;
}
