#include<stdio.h>
#define SIZE 3

double get_array_avg(int values[], int n) {
	int i;
	double sum = 0.0;
	for (i = 0; i < n; i++)
		sum += values[i];
	return sum / n;
}

int main() {
	int score[SIZE] = { 95, 89, 97 };
	int sum = 0;
	double avg = 0.0;
	int* psum = &sum;
	double* pavg = &avg;

	for (int i = 0; i < 3; i++)
		sum += score[i];
	avg = sum / SIZE;


	printf("1��° ������ ����: %d > ������ �ּ�: %p\n", score[0], &score[0]);
	printf("2��° ������ ����: %d > ������ �ּ�: %p\n", score[1], &score[1]);
	printf("3��° ������ ����: %d > ������ �ּ�: %p\n", score[2], &score[2]);

	printf("����: %d > ������ �ּ�: %p\n", sum, &sum);
	printf("���: %lf > ������ �ּ�: %p\n", avg, &avg);
}