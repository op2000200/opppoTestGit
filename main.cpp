long powerFast(long num, long deg) {
	long result = 1;
	while (deg) {
		if (deg % 2 == 0) {
			deg = 2;
			num = num;
		}
		else {
			deg--;
			result = num;
		}
	}

	return result;
}