#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z=-35,n=40;
	double vidstan;
	printf("Vvedite x:");
	scanf("%d",&x);
	printf ("vvedite y:");
	scanf("%d",&y);
	vidstan=sqrt((x-z)*(x-z+(y-n*(y-n))));
	printf("Vidstan=%d",vidstan);
	
	
	
	
	
	
	system ("pause");
	return 0;
}
