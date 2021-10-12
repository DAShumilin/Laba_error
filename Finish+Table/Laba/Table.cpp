void table(double start, double stop, int M, double* p_arr_var) {

	int gaps = M++;
	double distance = stop - start;
	double difference = distance / gaps;


	p_arr_var[0] = start;
	p_arr_var[M] = stop;

	for (int i = 0; i < M - 1; i++) {
		p_arr_var[i + 1] = p_arr_var[i] + difference;
	}
}