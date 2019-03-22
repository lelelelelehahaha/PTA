#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
	
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/* 你的代码将被嵌在这里 */
int IsTheNumber(const int N) {
	int m=sqrt(N);
	if(m*m!=N) return 0;
	int n=N,T[10],t=0,i,tmp;
	while(n) {
		tmp=n%10;
		for(i=0;i<t;i++) {
			if(tmp==T[i]) return 1;
		}
		T[t]=tmp;
		t++;
		n/=10;
	}
	return 0;
}
