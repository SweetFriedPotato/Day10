#include<stdio.h>
int main(void) {
	int a[] = { 10, 20, 30, 40 };
	int* p; //포인터 변수 선언
	int b = 10;
	//p = &b;
	//*p = *p + 10;
	p = a;
	printf("%d\n", *p);
	printf("%d\n", p[0]);
	printf("\n");
	printf("%d\n", *(p + 1));


	
	
}