#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,c,x,y,y1,y0;
	scanf("%lf",&a);
	c=0.001;
	x=0;
	y1=a;
	y=y1+1;
	printf("x        y\n");
	for(; y-y1>=c; ) {
		y0=y;
		y=y1;
		y1=0.999*y;
		printf("%lf %lf\n",x,y);
		x+=c;
	}
	float n=y0-y;
	if(n>c){
	printf("%lf %lf\n y=%lf",x,y1,y1);}
	return 0;
}

