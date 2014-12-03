#include<stdio.h>

 /*copie su entrada a la salida, reemplazando cada cadena de uno o mas blancos por un solo blanco */

main()
{
    int c,blancos;


    while((c = getchar()) != EOF){

        if(c != ' '){
            putchar(c);
            blancos = 0;
        }
        if(c == ' '){

            if(blancos < 1 ){
                putchar(c);
                blancos++;
            }
        }

    }

    return 0;
}
