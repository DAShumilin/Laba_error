#include "Function.h"

void table(double start, double stop, int M, double* p_arr_var, double* p_arr_val, int choice, double e, int *k, int* p_arr_k) {

	int gaps = M;
	double distance = stop - start;
	double difference = distance / gaps;


	p_arr_var[0] = start;
	p_arr_var[M] = stop;

	for (int i = 0; i < M - 1; i++) {
		p_arr_var[i + 1] = p_arr_var[i] + difference;
	}

	switch (choice) {
	case 1:
		for (int i = 0; i <= M; i++) {
			p_arr_val[i] = my_Exp(p_arr_var[i], e, k);
			p_arr_k[i] = *k;
		}
		break;
	case 2:
		for (int i = 0; i <= M; i++) {
			p_arr_val[i] = my_Sin(p_arr_var[i], e, k);
			p_arr_k[i] = *k;
		}
		break;
	case 3:
		for (int i = 0; i <= M; i++) {
			p_arr_val[i] = my_Cos(p_arr_var[i], e, k);
			p_arr_k[i] = *k;
		}
		break;
	case 4:
		for (int i = 0; i <= M; i++) {
			p_arr_val[i] = my_Ln(p_arr_var[i], e, k);
			p_arr_k[i] = *k;
		}
		break;
	case 5:
		for (int i = 0; i <= M; i++) {
			p_arr_val[i] = my_Frac(p_arr_var[i], e, k);
			p_arr_k[i] = *k;
		}
		break;
	}
}