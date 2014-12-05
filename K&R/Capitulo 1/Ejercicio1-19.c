#include<stdio.h>
#define MAXLINE 1000 /*Tamaño maximo de la linea de entrada */
int getlines(char line[],int maxline);
void copy(char to[],char from[]);
char *reverse (char caracteres[], int maximaLinea);

/*Imprime la linea de entrada mas larga */
main()
{
    int len; /*Longitud actual de la linea */
    int max; /*Maxima longitud vista hasta elñ momento */
    int mostrar;
    char line[MAXLINE]; /*Linea de entrada actual */
    char longest[MAXLINE]; /*La linea mas larga se guarda aqui */

    max = 0;
    while((len = getlines(line,MAXLINE)) > 0){
        if(len > max){
            max = len;
            copy(longest,line);
        }

		reverse(longest,max);
	
            }

    return 0;
}

/*getline: Lee una linea en s, regresa su longitud */
int getlines(char s[],int lim)
{
    int c;
    int i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
        if(c == '\n'){
            s[i] = c;
            ++i;
        }
    }
    s[i] = '\0';
    return i;
}

/*Copy: copia 'From' en 'to'; supone que to es suficientemente grande */
void copy(char to[],char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}

/*hace la reverse de la linea entrada */
char *reverse(char caracteres[],int maximaLinea)
{
	int mostrar;
	for(mostrar = maximaLinea; mostrar >= 0; mostrar--)
		printf("%c",caracteres[mostrar]);

	return caracteres;

}
