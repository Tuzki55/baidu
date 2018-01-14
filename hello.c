#include <stdio.h>

char a[] = {'a','a','a','a','a','a','a','a','a'};

void test(char b[]){
	printf("%d\n",sizeof(b));
}
int main(void){

	int d = 45;
	char c = 'a';
	printf("%d\n",sizeof(&d));
	printf("%d\n",sizeof(&c));
	printf("%d\n",sizeof(a));
	test(a);
	return 0;
}
