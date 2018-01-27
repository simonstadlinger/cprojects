#include<stdio.h>
#include<stdlib.h>
#define BUFSIZE 105


struct numbers{
	int hsnr, plz;
};

struct strings{
	char * vil, * countr;
};

struct adress2{
	struct numbers numb;
	struct strings str;
};


struct adress{
	int hsnr, plzh;
};


struct adress makeAdress(int hsnr, int plzh){
	struct adress home = {hsnr, plzh};
	return home;
}

void printVerschStruc(struct adress2 *pt){
	printf("hausnummer home3 %d, %d, ortschaft %s, Land %s\n", (*pt).numb.hsnr, (*pt).numb.plz, (*pt).str.vil, (*pt).str.countr);
}

void listingAdresses(){
	printf("from now on more adresses can be added\ntype <numb> <countynmb> <village> >country> ENTER\n");
	char *c;
	fgets(*c, BUFSIZE, stdin);

}

int main(int argc, char * argv[]){
	if(argc<5) printf("usage: <hsnr> <plz> <ortschaft> <land>\n");
	struct adress home1 = {100, 91619};
	printf("hausnummer %d, %d\n", home1.hsnr, home1.plzh);	
	struct adress home2 = makeAdress(atoi(argv[1]), atoi(argv[2]));
	printf("home2 hausnummer %d, %d\n", home2.hsnr, home2.plzh);
	struct adress2 *p;
	struct adress2 home3 = {{92, 201},{argv[3], argv[4]}};
	p = &home3;
	printVerschStruc(p);
	listingAdresses();
	return 0;
}

