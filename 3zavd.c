#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double sum,proz,n;
	int year=0;
	printf("vvedite sum:");
	scanf("%lf",&sum);
	printf ("Vvedite proz");
	scanf("%lf",&proz);
	n=sum*2;
	while (sum<n){
	year++;	
	sum=(sum+(sum/100)*proz);
		
	}
	printf("suma=%lf",sum);
	printf("year=%d",year);
	
	
	
	
	
	return 0;
}
