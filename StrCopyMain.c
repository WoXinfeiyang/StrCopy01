#include <stdio.h>
#include <stdlib.h>

char* strCopy(const char* src,char* dest){
	if(*src==NULL)
	{
		return NULL;
	}
	
	char *srcDes=dest;
	
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
	return srcDes;
	
}
int main(int argc, char *argv[]) {
	char a[]="abcd";
	char *b;

	strCopy(a,b);
	printf("b=%s\n",b);
	
	return 0;
}
