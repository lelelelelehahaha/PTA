#include<stdio.h>
#include<string.h>

void Print(int n,int noend) {
	switch (n) {
		case 0: printf("ling"); break;
		case 1: printf("yi"); break;
		case 2: printf("er"); break;
		case 3: printf("san"); break;
		case 4: printf("si"); break;
		case 5: printf("wu"); break;
		case 6: printf("liu"); break;
		case 7: printf("qi"); break;
		case 8: printf("ba"); break;
		case 9: printf("jiu"); break;
	}
	if(noend) putchar(' ');
}

int main()
{
	char n[101];
	scanf("%s",n);
	int m=strlen(n);
	int i;
	int sum=0;
	for(i=0;i<m;i++) {
		sum+=n[i]-'0';
	}
	int t[5];
	i=0;
	while(sum) {
		t[i]=sum%10;
		sum/=10;
		i++;
	}
	while(i) {
		i--;
		Print(t[i],i);
	}
	return 0;
}
