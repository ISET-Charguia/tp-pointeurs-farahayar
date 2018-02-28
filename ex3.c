#include<stdio.h>
#include<stdlib.h>
void *malloc(size_t taille) ;
int main (void)
{int n, *t,*p;

 puts("donner N");
	scanf("%d",&n);
	t=malloc(n);
	if(t!=NULL)
	{for(p=t;p<t+n;p++)
	{puts("donner un entier");
	scanf("%d",p);
    }
	for(p=t;p<t+n;p++)
		printf("%d\t",*p);
	}
	free(t);
	return 0;
}


