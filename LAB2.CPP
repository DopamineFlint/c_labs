#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
	int yesNo, x, n;
	float rez;
	float sum = 0;
	float s = 0;
	do{
		printf("Insert n: ");
		scanf("%d", &n);
		printf("Insert x: ");
		scanf("%d", &x);
	
		if (n > 0 && (x < -1 || x > 1)) {
			printf("Ok! Calculating...");
		} else {
			printf("Error! n = couldn't be <= 0 and x couldn't be from -1 to 1. Try again.\n");
			exit(1);
		}
	
		for (int i=0; i<=n; i++) {
			sum = 2.*(1./(2.*i+1)*pow(x, 2.*i+1)); //i - n
			s = s + sum;
			i++;
		}
		
		printf("result is: %.3f", s);
		fflush(stdin);
		printf(" Do you want to continue? 1 - yes, 0 - no: ");
		scanf("%d", &yesNo);
		if (yesNo == 0 || yesNo == 1) {
			printf("");
			}else{
				printf("invalid input. Try again\n");
			}
	}while(yesNo != 0);
	return 0;
}