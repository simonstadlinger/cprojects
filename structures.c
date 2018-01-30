#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define CONTACTSSIZE 100
#define BUFSIZE 105
#define WORDBUFSIZE 50
#define NUMBUFSIZE 10
struct numbers{
	int *hsnr, *plz;
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

void printStruc(struct adress2 *pt){
	printf("adress: %s,  %d, %d, %s\n", (*pt).str.vil, *(*pt).numb.hsnr, *(*pt).numb.plz, (*pt).str.countr);
}

struct adress2 * generatingAdress(){
	char * c,* village, * country;
	int  *numb = malloc(sizeof *numb);
	int  * countynumb = malloc(sizeof *numb);

	village = (char *)malloc(WORDBUFSIZE*sizeof(char));
        country = (char *)malloc(WORDBUFSIZE*sizeof(char));	


	int whitespacecount=0; 
	int *ws = &whitespacecount;
	fgets(c, BUFSIZE, stdin);
	char * buf = strtok(c, " ");
	while(buf!=NULL){
		switch (whitespacecount){
			case 0: *numb = atoi(buf);
				break;
			case 1: *countynumb = atoi(buf);
				break;
			case 2: village = buf;
				break;
			default: country = buf;
				 break;
		}
		buf = strtok(NULL, " ");	
		(*ws)++;
	}
	struct adress2 * temp;
	struct adress2 temporary = {{numb,countynumb},{village,country}};
	temp = &temporary;
	return temp;
}

int addingToArray(struct adress2 *newAdr, struct adress2 *pt){
	*pt = *newAdr;
	pt++;
	printStruc(pt);
	return 1;
}

int main(int argc, char * argv[]){
	if(argc<5){
	       	printf("usage: <hsnr> <plz> <ortschaft> <land>\n");
		return 0;
	}
	struct adress home1 = {100, 91619};
	printf("hausnummer %d, %d\n", home1.hsnr, home1.plzh);	
	struct adress home2 = makeAdress(atoi(argv[1]), atoi(argv[2]));
	printf("home2 hausnummer %d, %d\n", home2.hsnr, home2.plzh);

	printf("from now on more adresses can be added\ntype <numb> <countynmb> <village> >country> ENTER\n");
	struct adress2 array[CONTACTSSIZE];
	struct adress2 *arraypt; 
	arraypt = (struct adress2*) calloc(CONTACTSSIZE, sizeof *arraypt);
//	struct adress2 *arraypt = &array[0]; 

	
	while(1){
		struct adress2 *newAdrPt=generatingAdress();
		printStruc(newAdrPt);
		if(addingToArray(newAdrPt, arraypt)){
			printf("adress successfully added to your contact list\n\n");
		}
		else{
			printf("an error occured while adding adress to yout contact list. check if everything is spelled the right way\n\n");
		}
	}
		return 0;
}

