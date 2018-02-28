#include<stdio.h>
int main(void)
{char ch[]="",*p,*p1,*p2;
	int t;
   puts("donner une chaine de carac");
   scanf("%s",ch);
   for(p=&ch[1];*p!='\0';p++);
	p1=&ch[1];
	p2=p;
	t=1;
	printf("p1%x\n",(unsigned int)p1);
    printf("p2%x\n",(unsigned int)p2);
    while((p1<=p2)&&(t=1))
	{
	
	   if(*p1==*p2)
		{p1++;
		 p2--;
		}
	   else 
		 t=0;
	}
	if(t==0||p1>p2)
		printf("%s n'est pas palindrome\n",ch);
	else
		printf("%s est palindrome\n",ch);
	return 0;
}
		
   
