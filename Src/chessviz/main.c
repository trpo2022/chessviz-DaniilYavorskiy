#include <stdio.h>
#include "function.h"

extern char doska[8][8];

int main()
{   
	Doska_v_nachale();
	int who_hodit=1;
	while (who_hodit!=0)
	{
		Vivod_doski();
 who_hodit=Proverka_vvoda(who_hodit);
		if(who_hodit!=0)
			who_hodit++;
		printf("\n");	
	}
    return 0;
}
