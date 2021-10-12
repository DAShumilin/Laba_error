#include <stdio.h>
#include "Function.h"


int main() {

	int choice = 0;
	double x = 0.0, e = 0.0, answer = 0.0;

	printf("Choose\n1. e^x\n2. sin(x)\n3. cos(x)\n4. ln(1+x)\n5. 1/(1-x)\n");
	scanf_s("%d", &choice);
	if (choice > 5 || choice < 1) {
		printf("Error");
	}

	printf("Input x, e: ");
	scanf_s("%lf, %lf", x, e);

	switch (choice) {
	case 1:
		answer = my_Exp(x, e);
		break;
	case 2:
		answer = my_Sin(x, e);
		break;
	case 3:
		answer = my_Cos(x, e);
		break;
	case 4:
		answer = my_Ln(x, e);
		break;
	case 5:
		answer = my_Frac(x, e);
		break;
	}

	printf("lf", answer);

	return 0;
}