#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[]){
	if(argc <= 3){
		printf("usage: <digit> <digit> <digit>\n");
	}
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
/* Pointer sind variablen die Adressen von Variablen enthalten */
	int *p;
/* "*p" dient als dereferenzierung; wenn *p neu zugewiesen wird, ändert sich der wert der Variable auf die der pointer verweist */
	*p = i;
	(*p)++;
	printf("pointers reverence value changed: %d\n", *p);
/* "p" ist der pointer an sich. wird p neu zugewiesen, incrementiert*/
	p = &j;	
	printf("pointers value changed to another adress: %d\n", *p);
/* pointers and simple array*/
	int x=1, y=3, z[10];
}
