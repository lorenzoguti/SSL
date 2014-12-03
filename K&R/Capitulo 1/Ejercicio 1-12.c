#include<stdio.h>

#define IN 1 /*¨en una palabra */
#define OUT 0 /*fuera de una palabra */

/*Imprime su entrada una palabra por linea */
main()
{
    int c;


    while((c = getchar()) != EOF){

        if(c != ' ' || c != '\n' || c != '\t'){
            putchar(c);

        }

        if(c == ' ' || c == '\n' || c == '\t'){
            printf("\n");
            putchar(c);

            }
    }


    return 0;
}

