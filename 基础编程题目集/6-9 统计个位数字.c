#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;
	
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* 你的代码将被嵌在这里 */
int Count_Digit(const int N,const int D) {
	if(!N&&!D) return 1;
	int n;
	if(N<0) n=-N;
	else n=N;
	int count=0;
	while(n) {
		if(n%10==D) count++;
		n/=10;
	}
	return count;
}
