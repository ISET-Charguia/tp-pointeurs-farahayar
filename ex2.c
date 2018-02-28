#include<stdio.h>
int main (void)
{int A[]={12,23,34,45,56,67,78,89,90},*P,b,*p1;
P=A;
p1=&b;
b=3;
	printf("p1=%x\n",(unsigned int)p1);
    printf("p=%x\n",(unsigned int)P);
	printf("p1-p=%d\n",(unsigned int)p1-(unsigned int)P);
printf("%d\n",*P+2);
printf("%d\n",*(P+2));
printf("%x\n",(unsigned int)&P+1);
printf("%x\n",(unsigned int)(&A[4]-3));
printf("%d\n",*(A+3 ));
printf("%x\n",(unsigned int)(&A[7]-P));
printf("%x\n",(unsigned int)P+(*P-10));
printf("%d\n",*(P+*(P+8)-A[7]) );
	return 0;
}
