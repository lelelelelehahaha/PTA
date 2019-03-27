#include<stdio.h>

struct value {
	int N;
	double a;
} arr[20],B[20];
int arri,b;

int main()
{
	int K,i,j,k,Nt,flag;
	double at;
	for(i=0;i<20;i++) arr[i].N=-1;
	for(i=0;i<2;i++) {
		scanf("%d",&K);
		for(j=0;j<K;j++) {
			scanf("%d%lf",&Nt,&at);
			flag=1;
			for(k=0;k<arri;k++) {
				if(Nt==arr[k].N) {
					arr[k].a+=at;
					flag=0;
					break;
				}
			}
			if(flag) {
				arr[arri].N=Nt;
				arr[arri].a=at;
				arri++;
			}
		}
	}
	for(i=0;i<arri;i++) {
		Nt=-1;
		for(j=0;j<arri;j++) {
			if(Nt<arr[j].N&&arr[j].N!=-1) {
				Nt=arr[j].N;
				at=arr[j].a;
				k=j;
			}
		}
		arr[k].N=-1;
		if(at!=0) {
			B[b].N=Nt;
			B[b].a=at;
			b++;
		}
	}
	printf("%d",b);
	for(i=0;i<b;i++) printf(" %d %.1f",B[i].N,B[i].a);
	return 0;
}
