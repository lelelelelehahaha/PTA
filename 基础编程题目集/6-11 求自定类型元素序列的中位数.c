#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
ElementType Median(ElementType A[],int N) {
	int i,j;
	ElementType t;
	for(i=N-1;i>0;i--) {
		for(j=0;j<i;j++) {
			if(A[j]>A[i]) {
				t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
		}
	}
	return A[N/2];
}
