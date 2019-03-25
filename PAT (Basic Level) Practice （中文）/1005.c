#include<stdio.h>
#include<stdlib.h>

struct Node {
	int Data;
	struct Node *Next;
};
int k;
struct Node *temp,*Key[101];

struct Node * Insert(struct Node *L,int N) {
	L=malloc(sizeof(struct Node));
	L->Data=N;
	L->Next=NULL;
	return L;
}

int cut(int n,struct Node *p) {
	if(iscov(n)||n==1) return n;
	if(n&1) n=n+((n+1)>>1);
	else n=n>>1;
	p->Next=Insert(p,n);
	return cut(n,p->Next);
}

int iscov(int n) {
	int i;
	struct Node *p;
	for(i=0;i<k;i++) {
		p=Key[i];
		while(p!=NULL) {
			if(p->Data==n) return 1;
			p=p->Next;
		}
	}
	return 0;
}

int main()
{
	int K,i,j;
	int n,m;
	struct Node *p;
	scanf("%d",&K);
	for(i=0;i<K;i++) {
		scanf("%d",&n);
		if(iscov(n)) continue;
		temp=Insert(temp,n);
		m=cut(n,temp);
		for(j=0;j<k;j++) {
			if(m==Key[j]->Data) {
				p=temp->Next;
				while(p!=NULL) p=p->Next;
				p=Insert(p,Key[j]->Data);
				p->Next=Key[j]->Next;
				Key[j]->Data=temp->Data;
				Key[j]->Next=temp->Next;
				break;
			}
		}
		if(j==k) {
			Key[k]=Insert(Key[k],temp->Data);
			Key[k]->Next=temp->Next;
			k++;
		}
	}
	for(i=k-1;i>0;i--) {
		for(j=0;j<i;j++) {
			if(Key[i]->Data>Key[j]->Data) {
				p=Key[i];
				Key[i]=Key[j];
				Key[j]=p;
			}
		}
	}
	for(i=0;i<k-1;i++) {
		printf("%d ",Key[i]->Data);
	}
	printf("%d",Key[k-1]->Data);
	return 0;
}
