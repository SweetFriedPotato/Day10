#include<stdio.h>
//�Լ� ����
int get_sum(int *pa) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += pa[i];
	return sum;
}

int main() {
	int a[] = { 10, 20, 30, 40, 50 };
	int sum = 0;
	sum = get_sum(a);
	printf("%d\n", sum);
}