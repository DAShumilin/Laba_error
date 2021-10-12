#include "Function.h"

double my_Exp(double x, double e) {

	double x_0 = 0.0, x_n = 0.0, sum = 0.0;
	int a = 1, n = 1;

	x_0 = 1;
	sum = x_0;
	while (a) {
		x_n = x_0 * (x / (n++));
		sum += x_n;
		x_0 = x_n;
		if (x_n < e) {
			a = 0;
			return sum;
		}
		else {
			continue;
		}
	}
}

double my_Sin(double x, double e) {

	double x_0 = 0.0, x_n = 0.0, sum = 0.0, n = 0.0;
	int a = 1;

	x_0 = x;
	sum = x_0;
	while (a) {
		x_n = x_0 * ((-1 * x * x) / ((2 * n + 2) * (2 * n + 3)));
		sum += x_n;
		x_0 = x_n;
		n++;
		x_n = x_n < 0 ? -1 * x_n : x_n;
		if (x_n < e) {
			a = 0;
			return sum;
		}
		else {
			continue;
		}
	}
}

double my_Cos(double x, double e) {

	double x_0 = 0.0, x_n = 0.0, sum = 0.0, n = 0.0;
	int a = 1;

	x_0 = 1;
	sum = x_0;
	while (a) {
		x_n = x_0 * ((-1 * x * x) / ((2 * n + 1) * (2 * n + 2)));
		sum += x_n;
		x_0 = x_n;
		n++;
		x_n = x_n < 0 ? -1 * x_n : x_n;
		if (x_n < e) {
			a = 0;
			return sum;
		}
		else {
			continue;
		}
	}
}

double my_Ln(double x, double e) {

	double x_0 = 0.0, x_n = 0.0, sum = 0.0, n = 0.0;
	int a = 1;

	x_0 = x;
	sum = x_0;
	while (a) {
		x_n = x_0 * ((-1 * x * (n + 1)) / (n + 2));
		sum += x_n;
		x_0 = x_n;
		n++;
		x_n = x_n < 0 ? -1 * x_n : x_n;
		if (x_n < e) {
			a = 0;
			return sum;
		}
		else {
			continue;
		}
	}
}

double my_Frac(double x, double e) {

	double x_0 = 0.0, x_n = 0.0, sum = 0.0, n = 0.0;
	int a = 1;

	x_0 = 1;
	sum = x_0;
	while (a) {
		x_n = x_0 * x;
		sum += x_n;
		x_0 = x_n;
		n++;
		if (x_n < e) {
			a = 0;
			return sum;
		}
		else {
			continue;
		}
	}
}