#include <stdio.h>
#include <malloc.h>
#include "Function.h"
#include "Table.h"


int main() {

	int choice = 0, M = 0;
	double x = 0.0, e = 0.0, answer = 0.0, start = 0.0, stop = 0.0;
	double* p_arr_var, * p_arr_val;

	printf("Choose\n1. e^x\n2. sin(x)\n3. cos(x)\n4. ln(1+x)\n5. 1/(1-x)\n");
	scanf_s("%d", &choice);
	if (choice > 5 || choice < 1) {
		printf("Error");
	}

	printf("Input e: ");
	scanf_s("%lf", &e);

	printf("Input start, stop, M: ");
	scanf_s("%lf, %lf, %d", &start, &stop, &M);

	p_arr_var = (double*)calloc(M + 1, sizeof(double));
	p_arr_val = (double*)calloc(M + 1, sizeof(double));

	table(start, stop, M, p_arr_var);

	switch (choice) {
	case 1:
		for (int i = 0; i <= M; i++) {
			p_arr_val[i] = my_Exp(p_arr_var[i], e);
		}
		break;
	case 2:
		for (int i = 0; i <= M; i++) {
			p_arr_val[i] = my_Sin(p_arr_var[i], e);
		}
		break;
	case 3:
		for (int i = 0; i <= M; i++) {
			p_arr_val[i] = my_Cos(p_arr_var[i], e);
		}
		break;
	case 4:
		for (int i = 0; i <= M; i++) {
			p_arr_val[i] = my_Ln(p_arr_var[i], e);
		}
		break;
	case 5:
		for (int i = 0; i <= M; i++) {
			p_arr_val[i] = my_Frac(p_arr_var[i], e);
		}
		break;
	}

	for (int i = 0; i <= M; i++) {
		printf("|   %lf   |", p_arr_var[i]);
	}
	printf("\n");
	for (int i = 0; i <= M; i++) {
		printf("|   %lf   |", p_arr_val[i]);
	}

	return 0;
}