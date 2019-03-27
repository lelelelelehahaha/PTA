#include<stdio.h>

int main()
{
  int a,b,sum;
  scanf("%d%d",&a,&b);
  sum=a+b;
  if(sum<0) {
    sum=~sum+1;
    putchar('-');
  }
  else if(sum==0) {
  	putchar('0');
  	return 0;
  }
  int arr[5];
  int i=0;
  while(sum) {
    arr[i]=sum%1000;
    sum/=1000;
    i++;
  }
  printf("%d",arr[i-1]);
  i--;
  while(i) {
  	putchar(',');
  	if(arr[i-1]<10) printf("00");
  	else if(arr[i-1]<100) putchar('0');
    printf("%d",arr[i-1]);
    i--;
  }
  return 0;
}
