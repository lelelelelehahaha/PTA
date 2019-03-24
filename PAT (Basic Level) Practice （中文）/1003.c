#include<stdio.h>
#include<string.h>

char str[101];

int fun1(int a,int b,int c) {
	if(b==1) {
		if(a==c) return 1;
		else return 0;
	}
	return fun1(a,b-1,c-a);
}

int fun() {
	int i,P,T,p=0,t=0;
	for(i=0;str[i]!='\0';i++) {
		switch(str[i]) {
			case 'A': continue;
			case 'P': P=i; p++; break;
			case 'T': T=i; t++; break;
			default : return 0;
		}
	}
	if(p!=1||t!=1||P>=T-1) return 0;
	return fun1(P,T-P-1,strlen(&str[T+1]));
}

int main()
{
	int T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++) {
		scanf("%s",str);
		if(fun()) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
