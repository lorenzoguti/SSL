#include<stdio.h>

#define MAXLINE 1000 /*maximo tamaño de una linea de entrada */

int max; /*Maxima longitud vista hasta el momento */
char line[MAXLINE]; /*Linea de entrada actual */
char longest[MAXLINE]; /*la linea mas larga se guarda aqui */

int getline(void);
void copy(void);

/*Imprime la linea de entrada mas larga; version con extern */
main()
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while((len = getline()) > 0)
    if(len > max){
        max = len;
        copy();
    }

    if(max > 0) /*Hubo una linea */
        printf("%s",longest);

    return 0;
}

/*Getline: version con extern */
int getline(void)
{
    int c,i;
    extern char line[];

    for(i = 0; i < MAXLINE - 1 && (c = getchar())!= EOF && c != '\n'; ++i)
        line[i]= c;
    if(c == '\n'){
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

/*Copy: version con extern */
void copy(void)
{
    int i;
    extern char line[], longest[];

    i = 0;
    while((longest[i] = line[i]) != '\0')
        ++i;
}



