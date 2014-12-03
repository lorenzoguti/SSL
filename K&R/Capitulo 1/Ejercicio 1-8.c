#include<stdio.h>

/*Cuenta los espacios en blanco, tabuladores y nuevas lineas */
main()
{
    int c,tabuladores,espacios,nl;
    tabuladores = 0;
    espacios = 0;
    nl = 0;

    while((c = getchar()) != EOF){
            if(c == '\t'){
            ++tabuladores;
        }
        if(c == '\n'){
            ++nl;
            }
        if(c == ' '){
            ++espacios;
        }

    }

    printf("Los espacios en blanco son:%d\n  Los tabuladores son:%d\n  Las nuevas lineas son:%d\n ", espacios, tabuladores, nl);

    return 0;

}

