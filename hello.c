#include <gb/gb.h>
#include <stdio.h>

void main()
{
	printf("Hello\nDMG!!!");
	printf("\nPress Start");
	waitpad(J_START);  // other keys are J_A, J_UP, J_SELECT, etc.
	printf("\nyay!");
}