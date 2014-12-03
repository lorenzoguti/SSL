/* Convertir.c
 *
 *
 * "Programa que extiende el m�todo toupper, permitiendo pasar a may�scula palabras del idioma espa�ol.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ENIE_MIN 164 /* � */
#define ENIE_MAY 165 /* � */

#define A_ACENTUADA_MIN 160 /* � */
#define E_ACENTUADA_MIN 130 /* � */
#define E_ACENTUADA_MAY 144 /* � */
#define I_ACENTUADA_MIN 161 /* � */
#define O_ACENTUADA_MIN 162 /* � */
#define U_ACENTUADA_MIN 163 /* � */
#define U_DIERESIS_MIN 129 /* � */
#define U_DIERESIS_MAY 154 /* � */

int GetComoMayuscula(int lower);

int main(void) {
	int c;

	putchar('�');

	while ((c = getchar()) != EOF)
		putchar((char)GetComoMayuscula(c));
	return EXIT_SUCCESS;
}

int GetComoMayuscula(int lower) {
	switch (lower) {
		case ENIE_MIN:
			return ENIE_MAY;
		case A_ACENTUADA_MIN:
			return 'A';
		case E_ACENTUADA_MIN:
			return E_ACENTUADA_MAY;
		case I_ACENTUADA_MIN:
			return 'I';
		case O_ACENTUADA_MIN:
			return 'O';
		case U_ACENTUADA_MIN:
			return 'U';
		case U_DIERESIS_MIN:
			return U_DIERESIS_MAY;
		default:
			return toupper(lower);
	}
}

