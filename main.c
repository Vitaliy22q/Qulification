#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	double vidstan;
	printf("Vvedite x:");
	scanf("%d",&x);
	printf ("vvedite y:");
	scanf("%d",&y);
	vidstan=sqrt((x+35)*(x+35)+(y-40)*(y-40));
	printf("Vidstan=%lf",vidstan);
	
	
	
	
	
	
	system ("pause");
	return 0;
}
