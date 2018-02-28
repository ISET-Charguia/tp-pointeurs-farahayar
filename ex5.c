#include<stdio.h>
#include<string.h>
int main(void)
{char ch[]="";
	char *p;
	puts("donner une chaine de carac");
	scanf("%s",ch);
	for(p=&ch[1];*p!='\0';p++);
		printf("n=%d\n",(unsigned int)(p-&ch[1])+1);
	return 0;
}
