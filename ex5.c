#include<stdio.h>
#define SIZE 5
//배열 요소의 평균 계산
double get_array_avg(int values[], int n) {
	int i;
	double sum = 0.0;
	for (i = 0; i < n; i++)
		sum += values[i];
	return sum / n;
}

//배열 요소를 화면에 출력
void print_array(int values[], int n) {
	int i;
	printf("[");
	for (i = 0; i < n; i++)
		printf("%d", values[i]);
	printf("]\n");
}

int main(void) {
	int data[SIZE] = { 10, 20, 30, 40, 50 };
	double result;
	print_array(data, SIZE);
	result = get_array_avg(data, SIZE);
	printf("배열 원소들의 평균 = %f\n", result);
	return 0;
}
