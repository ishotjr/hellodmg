#include <gb/gb.h>
#include <stdio.h>
#include <gb/font.h>
#include <gb/console.h>
#include <gb/drawing.h>

void main()
{
    font_t ibm_font;

    font_init();
    color(WHITE, DKGREY, SOLID); // fg, bg
    ibm_font = font_load(font_ibm);  /* 96 tiles */

    mode(get_mode() | M_NO_SCROLL);

    font_set(ibm_font);

	printf("Hello\nDMG!!!");
	printf("\nPress Start");
	waitpad(J_START);  // other keys are J_A, J_UP, J_SELECT, etc.
	printf("\nyay!");
}