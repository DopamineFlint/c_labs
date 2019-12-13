#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //added conio.h to make putch working properly
#define PROMPT 0 //added 0 instead of :

main ()
{
	int yesNo;
	float a, b, rez;
	char oper;
		do {
			scanf("%f%c%f", &a, &oper, &b);
			switch(oper) {
				case '+': rez=a+b; break;
				case '-': rez=a-b; break;
				case '*': rez=a*b; break;
				case '/': rez=a/b; break;
			default:
			printf("Error!\n");
			exit(1);
			}
		prinf("result:%f")
		fflush(stdin);	
		printf(" Do you want to continue? 1 - yes, 0 - no: ", rez); //missing ;
		scanf("%d", &yesNo);
			if (yesNo == PROMPT || yesNo == 1) {
			printf("");
			}else{
				printf("invalid input. Try again\n");
			}
		}while(yesNo != PROMPT);
		return 0;
}



