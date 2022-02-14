#include <stdio.h>

int main () 
	{char mass[9][9];
	for(int i = 0; i < 9; i++)
		for(int j = 0; j < 9; j++) 
			{mass[i][j] = 49;
			if (mass[i][j] == mass[8][0]) 
				{mass[i][j] = 0;
				}
			}

	for(int i = 2; i < 6; i++)
		for(int j = 1; j < 9; j++)
			{mass[i][j] = 32;
			}

	for(int i = 1; i < 2; i++)
		for(int j = 1; j < 9; j++) 
			{mass[i][j] = 112;
			}

	for(int i = 0; i < 9; i++)
		for(int j = 0; j < 9; j++) 
			{mass[6][0] = 50;
			mass[5][0] = 51;
			mass[4][0] = 52;
			mass[3][0] = 53;
			mass[2][0] = 54;
			mass[1][0] = 55;
			mass[0][0] = 56;
			}

	for(int i = 0; i < 9; i++)
		for(int j = 0; j < 9; j++) 	
			{mass[8][1] = 97;
			mass[8][2] = 98;
			mass[8][3] = 99;
			mass[8][4] = 100;
			mass[8][5] = 101;
			mass[8][6] = 102;
			mass[8][7] = 103;
			mass[8][8] = 104;
			}

	for(int i = 0; i < 9; i++)
		for(int j = 0; j < 9; j++) 
			{mass[7][1] = mass[7][8] = 82;
			mass[7][2] = mass[7][7] = 78;
			mass[7][3] = mass[7][6] = 66;
			mass[7][4] = 81;
			mass[7][5] = 75;
			}

	for(int i = 0; i < 9; i++)
		for(int j = 0; j < 9; j++) 
			{mass[0][1] = mass[0][8] = 114;
			mass[0][2] = mass[0][7] = 110;
			mass[0][3] = mass[0][6] = 98;
			mass[0][4] = 113;
			mass[0][5] = 107;
			}

	for(int i = 6; i < 7; i++)
		for(int j = 1; j < 9; j++)
			{mass[i][j] = 80;
			}

	for(int i = 0; i < 9; i++)
		{for(int j = 0; j < 9; j++) 
			{printf("%c ", mass[i][j]);
			}
		printf("\n");
		}

	return 0;
}
