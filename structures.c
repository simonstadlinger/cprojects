#include<stdio.h>
#include<stdlib.h>

struct string{
	char a[];
	char b[];
};

struct data{
	struct string;
	int a;
};

int main(int argc, char * argv[]){
	int i;
	struct data datase = {atoi(argv[1])};
	
}

