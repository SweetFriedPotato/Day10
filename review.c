#include<stdio.h>
int gob(int* pa, int* pb) {
	printf("[���� �Լ� ����]\n");
	int result = (*pa) * (*pb);
	return result;
}

int main() {
	int a = 10, b = 10, result;
	printf("�־��� ��: a=%d, b=%d\n", a, b);
	result = gob(&a, &b);
	printf("%d * %d = %d\n", a, b, result);
	printf("���α׷� ����");
	return 0;
}