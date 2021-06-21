#include <stdio.h>
int main(){
	int a=50, b=30;
	printf("before swap a=%d b=%d", a,b);
	a=a+b;//a=80 (50+30)
	b=a-b;//b=50 (80-30)
	a=a-b;//a=30 (80-50)
	printf("\nafter swap a=%d b=%d", a,b);
	return 0;
}
