#include<stdio.h>

int main() {
	int a[] = { 10, 20, 30, 40 };
	printf("%d\n", a[0]);
	printf("%d\n", *a); //a�� ����Ű�� ���� ã����.
	printf("%d\n", *(a+1));//a ���� ���� ����Ű�� ���� ã����. 

	/*
	printf("&a[0] = %p\n", &a[0]);
	printf("&a[1] = %p\n", &a[1]);
	printf("&a[2] = %p\n", &a[2]);
	printf("&a[3] = %p\n", &a[3]);

	printf("a = %p\n", a);
	return 0;
	*/
}