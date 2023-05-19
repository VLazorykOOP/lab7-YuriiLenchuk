template<typename T>
double average(T* arr, size_t len) {
	double sum = 0;
	for (size_t i = 0; i < len; i++) {
		sum += arr[i];
	}
	return sum / len;
}
template<> double average(char* arr, size_t len) {
	double sum = 0;
	for (size_t i = 0; i < len; i++) {
		sum += static_cast<double>(arr[i]);
	}
	return sum / len;
}