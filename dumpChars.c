#include <stdio.h>
int main(){
	char c;
	int i = 0;
	while(scanf("%c",&c)==1){
		i++;
		if(i%16 == 1){
			printf("%02x",c);
		}
		else{
			if(i%4 == 0)
				if(i%16 == 0)
					printf(" %02x\n",c);
				else
					printf(" %02x ",c);
			else
				printf(" %02x",c);
		}
		//if(i%16 == 0) printf("\n");
		/*else{
			printf("*");
			if(i%4 == 0) printf("*");
		}*/
	}
	if(i%16 != 0) printf("\n");
	return 0;
}
