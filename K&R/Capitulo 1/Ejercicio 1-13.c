#include<stdio.h>

/*Imprime histograma de las longitudes de las palabras */


main()
{
    int c,i,nwhite,nother;
    int ndigit[10];

    nwhite = nother = 0;

    for(i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while((c = getchar())!= EOF){
       if(c != ' '){
        printf("*");
       }
    }

        return 0;
}
