#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int array[argc-1];
	for(int i = 0; i <argc; i++){
		array[i]=atoi(argv[i+1]);
		printf("array index %d: %d\n", i, array[i]);
	}
	printf("meine fresse!");
	int *p;
	p = &array[2];
	printf("arraypointer at value: %d\n", *p); 
}
