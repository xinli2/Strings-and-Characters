/* reverseWords.c
 *
 * Author: TODO
 *         (skeleton by Russ Lewis)
 *
 * Reverses the words of output.  Has some (intentional) buffer-overflow
 * bugs.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char buf1[32];
	char buf2[32];
	char buf3[32];
	int res=0;

	/* initialize the strings in all three buffers */
	strcpy(buf1, "BUF1");
	strcpy(buf2, "BUF2");
	strcpy(buf3, "BUF3");


//TODO: put your code here

	int debug;
	int check=scanf("%d",&debug);
	if(check!=1 || (debug!=0&&debug!=1)){
		fprintf(stderr,"error on reading first integer!\n");
		return -1;
	}
	//alow buffer overflow
	if(debug==1){
		while(scanf("%s",buf1)!=EOF){
			int i;
			for (i=strlen(buf1)-1;i>=0;i--){
				printf("%c",buf1[i]);
			}
			printf("\n");
			printf("	DEBUG: buf1=\'%s\' buf2=\'%s\' buf3=\'%s\'\n",buf1,buf2,buf3);
			if(strlen(buf1)>31){
				printf("	OOPS: The word to reverse was too long!  len=%d\n",(int)(strlen(buf1)));
				res=1;
	}
		}
	}
	//Not allowed buffer overflow
	if(debug==0){
		while(scanf("%31s",buf1)!=EOF){
			int i;
			for (i=strlen(buf1)-1;i>=0;i--){
				printf("%c",buf1[i]);
			}
			//char ha='\0';
			//printf("%c\n",ha);
			printf("\n");
			printf("	DEBUG: buf1=\'%s\' buf2=\'%s\' buf3=\'%s\'\n",buf1,buf2,buf3);
			if(strlen(buf1)>31){
				printf("	OOPS: The word to reverse was too long!  len=%d\n",(int)(strlen(buf1)));
				res=1;
			}
		}
	}
	return res;
}
