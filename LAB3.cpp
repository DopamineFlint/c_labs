#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main (int argc, char* argv[]) {
	
	int n, p, m, sp, spi, spp, sppi, mult = 1;
	
	printf("Input n: ");
	scanf("%d", &n);
	
	int a[n] = {0};
	int s = sizeof a / sizeof(int);
	printf(" %d\n", s);
	
	for (int i = 0; i < n; i++) {
		printf("Input p: ");
		scanf("%d", &p);
		a[i] = p;
	}
	
	printf("Arrays numbers: ");
	
	for (int i = 0; i < n; i++) {
		printf(" %d", a[i]);
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			m = m + a[i];
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i] < sp) {
			sp = a[i];
			spi = i;
		}
	}
	
	printf("\n The most MIN num in array: ");
	printf(" %d\n", sp);
	
	for (int i = 0; i < n; i++) {
		if (a[i] > spp) {
			spp = a[i];
			sppi = i;
		}
	}
	
	printf("The most BIG num in array: ");
	printf("%d\n", spp);
	
	printf("sp index: ");
	printf("%d\n", spi);
	printf("spp index: ");
	printf("%d\n", sppi );
	
	if (spi < sppi) {
		for (spi; spi <= sppi; spi++) {
			mult = a[spi] * mult;
		}
	}else{
		for (spi; spi >= sppi; spi--) {
		mult = a[spi] * mult;
		}	
	}
	
	printf("Multiply: ");
	printf("%d\n", mult);
	
	printf("Sum of negative nums: ");
	printf(" %d", m);
	return 0;
}
