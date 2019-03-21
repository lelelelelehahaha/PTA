#include<stdio.h>

struct Student {
	char name[11];
	char id[11];
	int mark;
};

struct Student std[1000];

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++) {
		scanf("%s%s%d",&std[i].name,&std[i].id,&std[i].mark);
	}
	int max=0;
	int min=0;
	for(i=1;i<n;i++) {
		if(std[i].mark>std[max].mark) max=i;
		if(std[i].mark<std[min].mark) min=i;
	}
	printf("%s %s\n",std[max].name,std[max].id);
	printf("%s %s",std[min].name,std[min].id);
	return 0;
}
