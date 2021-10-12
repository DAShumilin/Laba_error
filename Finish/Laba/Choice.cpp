#include <stdio.h>
#include "Function.h"


int main() {

	int choice = 0, z = 0;
	double x = 0.0, e = 0.0, answer = 0.0;
	int* k = &z;

	printf("Choose\n1. e^x\n2. sin(x)\n3. cos(x)\n4. ln(1+x)\n5. 1/(1-x)\n");
	scanf_s("%d", &choice);
	if (choice > 5 || choice < 1) {
		printf("Error");
	}

	printf("Input x, e: ");
	scanf_s("%lf, %lf", &x, &e);

	switch (choice) {
	case 1:
		answer = my_Exp(x, e, k);
		break;
	case 2:
		answer = my_Sin(x, e, k);
		break;
	case 3:
		answer = my_Cos(x, e, k);
		break;
	case 4:
		answer = my_Ln(x, e, k);
		break;
	case 5:
		answer = my_Frac(x, e, k);
		break;
	}

	printf("%lf, %d", answer, *k);

	return 0;
}