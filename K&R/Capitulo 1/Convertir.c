/* Convertir.c
 *
 *
 * "Programa que extiende el método toupper, permitiendo pasar a mayúscula palabras del idioma español.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ENIE_MIN 164 /* ñ */
#define ENIE_MAY 165 /* Ñ */

#define A_ACENTUADA_MIN 160 /* á */
#define E_ACENTUADA_MIN 130 /* é */
#define E_ACENTUADA_MAY 144 /* É */
#define I_ACENTUADA_MIN 161 /* í */
#define O_ACENTUADA_MIN 162 /* ó */
#define U_ACENTUADA_MIN 163 /* ú */
#define U_DIERESIS_MIN 129 /* ü */
#define U_DIERESIS_MAY 154 /* Ü */

int GetComoMayuscula(int lower);

int main(void) {
	int c;

	putchar('ñ');

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

