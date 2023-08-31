#include<stdio.h>
//함수 정의
int get_sum(int a[]) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += a[i];
	return sum;
}

int main() {
	int a[] = { 10, 20, 30, 40, 50 };
	int sum = 0;
	sum = get_sum(a);
	printf("%d\n", sum);
}