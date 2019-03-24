#include<stdio.h>

int n,m,flag;

void fun() {
	if(m==0) return;
	n*=m;
	m--;
	if(flag) putchar(' ');
	printf("%d %d",n,m);
}

int main()
{
	scanf("%d%d",&n,&m);
	if(m==0) {
		printf("0 0");
		return 0;
	}
	fun();
	flag++;
	while(scanf("%d%d",&n,&m)!=EOF) fun();
	return 0;
}
