#include<stdio.h>
#include<stdlib.h>
void *malloc(size_t taille) ;
//fn tri du tab *****************************************************
void tri_tab(int A[],int N)
{int *p2,*p1,AIDE;
	for(p1=A+1;p1<A+N;p1++)
	{AIDE=*p1;
	 p2=p1;
	while(p2>A && *(p2-1)<AIDE)
		{*p2=*(p2-1);
			p2=p2-1;
	    }
	if(p1!=p2)
			*p2=AIDE;
	}


}


//fn affichage du tab **********************************************
void affichage_tab(int A[],int N)
{int *p1;
 for(p1=A;p1<A+N;p1++)
		printf("%d\t",*p1);
}
//programme principale **********************************************

int main (void)
{int N,A[N],*p1;

 puts("donner N");
 scanf("%d",&N);

//fn saisie du tab **************************************************
    p1=malloc(N);
	p1=A;
	if(A!=NULL)
	{for(p1=A;p1<A+N;p1++)
	{puts("donner un entier");
	 scanf("%d",p1);
    }
	}

  tri_tab(A,N);
  affichage_tab(A,N);
	free(A);
	return 0;
}
