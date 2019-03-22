#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
	
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */
void Print_Factorial(const int N) {
	if(N<0) printf("Invalid input");
	else {
		int arr[750],a=0;
		int i;
		arr[a]=1;
		a++;
		int jw=0;
		int n=N;
		while(n>1) {
			for(i=0;i<a;i++) {
				arr[i]=arr[i]*n+jw;
				if(arr[i]>=1e4) {
					jw=arr[i]/1e4;
					arr[i]-=(jw*1e4);
				}
				else jw=0;
			}
			if(jw) {
				arr[a]=jw;
				a++;
				jw=0;
			}
			n--;
		}
		a--;
		printf("%d",arr[a]);
		int t,ti;
		while(a) {
			a--;
			t=arr[a];
			ti=3;
			while(t>10){
				t/=10;
				ti--;
			}
			for(i=0;i<ti;i++) putchar('0');
			printf("%d",arr[a]);
		}
	}
}
