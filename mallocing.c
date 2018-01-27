#include<stdio.h>
#include<stdlib.h>
#define BUF_SIZE 100



int main(int argc, char * argv[]){
	char a[BUF_SIZE] = "hellowold";
	char *pa = a;
	char *pp = &a[0];
	printf(" *pa = a: %c\n", *pa);
	printf(" *pa = &a[0]: %c\n", *pp);

	
}
