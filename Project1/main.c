#include <stdio.h> 
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int a, b;
	printf("enter two number: ");
	scanf_s("%d %d", &a, &b);
	if (a > b) {
		int temp = a;
		a = b;
		b = temp; 
	}
	for (int i = a, c = 0; i <= b; i++){
		if (i % 3 == 0) {
			printf("%6d", i);
			c++;
			if (c % 4 == 0) printf("\n");
		}
	}
}
//scp *.c *.h user@shell.puv.fi:~/AppDevCD
//cp ../makefile . copy from parent