#include<stdio.h>
int main()
{
	char str[1005][81];
	int i=0;
	scanf("%s",str[i]);
	
	while(getchar()!='\n') {
		i++;
		scanf("%s",str[i]);
	}
	while(i>=0) {
		printf("%s",str[i]);
		i--;
		if(i>=0) putchar(' ');
	}
	return 0;
}
