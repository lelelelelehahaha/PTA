#include<stdio.h>

int T[101],t;
int Num[101],num;
int a[101],K;
int b[101];

void cut(int n) {
	if(n==1||iscover(n)) return;
	if(n>>1<<1==n) {
		cut(n>>1);
		T[t]=n>>1;
		t++;
	}
	else {
		cut((n*3+1)>>1);
		T[t]=(n*3+1)>>1;
		t++;
	}
}
int iscover(int n) {
	int i;
	for(i=0;i<t;i++) {
		if(n==T[i]) return 1;
	}
	return 0;
}
void fun() {
	int i,j;
	for(i=0;i<K;i++) {
		for(j=0;j<t;j++) {
			if(a[i]==T[j]) b[j]==1;
		}
	}
	for(i=0;i<t;i++) {
		if(!b[i]) {
			Num[num]=a[i];
			num++;
		}
	}
	int tmp;
	for(i=num-1;i>0;i--) {
		for(j=0;j<i;j++) {
			if(Num[j]<Num[i]) {
				tmp=Num[i];
				Num[i]=Num[j];
				Num[j]=tmp;
			}
		}
	}
}

int main()
{
	scanf("%d",&K);
	int i;
	int n;
	for(i=0;i<K;i++) {
		scanf("%d",&n);
		a[i]=n;
		cut(n);
	}
	for(i=0;i<t;i++) {
		printf("%d ",T[i]);
	}
//	fun();
//	for(i=0;i<num;i++) {
//		printf("%d",Num[i]);
//		if(i!=num-1) putchar(' ');
//	}
	return 0;
}
