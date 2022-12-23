/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// C program to build the outline
// boundary using draw()
#include <stdio.h>
#include <stdlib.h>
int i, j, height = 30;
int width = 30, gameover, score;

// Function to draw a boundary
void draw()
{
	// system("cls");
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			if (i == 0 || i == width - 1 || j == 0
				|| j == height - 1) {
				printf("#");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

// Driver Code
int main()
{
	// Function Call
	draw();

	return 0;
}
