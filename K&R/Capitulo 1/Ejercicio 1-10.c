#include<stdio.h>

 /*Remplace cada tabulacion por \t \ por \\ */

main()
{
    int c;


    while((c = getchar()) != EOF){

        if(c == '\t'){
            printf(" \\t ");

        }
        if(c == '\\'){
                printf("\\");
            }
        putchar(c);
        }
        return 0;
    }



