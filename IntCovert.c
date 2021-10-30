#include <stdio.h>
#include <ctype.h>
int main(){
	int space = 0, digit = 0, bad = 0;
	int x;
	int* ax=NULL;
	unsigned char* cx=NULL;
	while(scanf("%d",&x)==1){
		//if(isdigit(x)) digit++;
		ax = &x;
		cx = (unsigned char*)(ax);
		printf("val=%d=0x%08x: as characters: ",x,x);
		int i = 0;
		while(i < 4){
			if(i > 0) printf(" ");
			char c = *(cx+i);
			if(*(cx+i)=='\0') 
				printf("0x%02x=<null>",*(cx+i));
			else if(!isprint(c))
				printf("0x%02x=?",*(cx+i));

			else
				printf("0x%02x='%c'",*(cx+i),c);
			i++;
		}
		printf("\n");
	}
	printf("\n");
	printf("Totals: spaces=%d digits=%d bad=%d\n",space,digit,bad);
	return 0;
}
