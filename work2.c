#include<stdio.h>
double get_avg(int a[]) {
	int sum = 0;
	double avg;
	for (int i = 0; i < SIZE; i++)
		sum += a[i];
	avg = (double)sum / SIZE;
}

int get_max(int a[]) {
	int max = a[0];
	for (int i = 1; i < SIZE; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}
int get_min(int a[]) {
	int min = a[0];

}

int main() {

}