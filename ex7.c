#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void moin_dernier(char ch[])
{char *p;
	for(p=&ch[1];*p!='\0';p++);
	*(p-1)='\0';
	free(p);
}
char *moin_dernierf(char ch[])
{char *p;
	for(p=&ch[1];*p!='\0';p++);
	*(p-1)='\0';
	free(p);
return ch;
}
int main(void)
{char ch[]="",*p;
 puts("donner une chaine de carac");
 scanf("%s",ch);

 moin_dernier(ch);
 printf("ch=%s\n",ch);
 p=moin_dernierf(ch);
printf("ch1=%s\n",p);
		return 0;
}
