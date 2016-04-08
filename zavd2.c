#include <stdio.h>
#include <math.h>

double func(double x);

int main()
{
	double x;
	
	printf("\nVvedite x: ");
	scanf("%lf", &x);

	
 printf("\nY(x) = %lf", func(x));
	
}

double func(double x )
{
	double y;
	double a, b, c, d, f, g, h;
		if(x < 1328) {
		a = 0;
		b = 1;
		c = 1;
		d = 3;
		f = -5;
		g = 0.005;
		h = 0;
	}
	else {
		a = 0;
		b = 7;
		c = 4;
		d = 1;
		f = -5;
		g = 0.004;
		h = 1100;
	}
	
	y = a + (b / (c + d * exp(f + g * (x + h))));
	
	return y;
}
