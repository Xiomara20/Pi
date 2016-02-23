Pi
Calculo del valor de pi

#include <stdio.h>

#include <stdbool.h>
#include <iso646.h>

int main(int argc, char const *argv[]){
	int i=0;
	int j=0;
	float pi=0;
for (i=1; i<9999999999; i=i+2){
	if(i==1 or j==4) {
		pi = pi + (4/(float)i);
		j=2;
	}
	else {
		pi= pi - (4/(float)i);
		j = j + 2;
	}
}
printf ("El valor de pi es: %1.52f", pi);

	/* code */
	return 0;
}


