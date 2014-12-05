#include <stdio.h>

/*Elimina los blancos y los tabuladores que estan al final de cada linea de entrada */


main()
{

	int c;
	while ((c = getchar()) != EOF){
		while (c != '\t' || c != '\n'){
			putchar(c);
			c = getchar();
			}
		
		}

return 0;

} 
