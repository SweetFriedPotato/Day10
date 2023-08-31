#include<stdio.h>
int gob(int* pa, int* pb) {
	printf("[곱셈 함수 영역]\n");
	int result = (*pa) * (*pb);
	return result;
}

int main() {
	int a = 10, b = 10, result;
	printf("주어진 값: a=%d, b=%d\n", a, b);
	result = gob(&a, &b);
	printf("%d * %d = %d\n", a, b, result);
	printf("프로그램 종료");
	return 0;
}