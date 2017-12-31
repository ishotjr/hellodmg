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

    // draw face
    color(LTGREY,LTGREY,SOLID);
    circle(SCREENWIDTH/2,SCREENHEIGHT/2,SCREENHEIGHT/2,M_FILL);

    // eyes
    color(WHITE,WHITE,SOLID);
    circle(SCREENWIDTH/3,SCREENHEIGHT/3,SCREENHEIGHT/9,M_FILL);
    circle(2*SCREENWIDTH/3,SCREENHEIGHT/3,SCREENHEIGHT/9,M_FILL);
    color(DKGREY,DKGREY,SOLID);
    circle(SCREENWIDTH/3,17*SCREENHEIGHT/48,SCREENHEIGHT/12,M_FILL);
    circle(2*SCREENWIDTH/3,17*SCREENHEIGHT/48,SCREENHEIGHT/12,M_FILL);

    // mouth
    color(DKGREY,DKGREY,SOLID);
    circle(SCREENWIDTH/2,2*SCREENHEIGHT/3,SCREENHEIGHT/6,M_FILL);
}