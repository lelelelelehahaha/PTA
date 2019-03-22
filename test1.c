#include<stdio.h>
#include<math.h>

//输入负数会返回 d:0 f:-1.#IND00
// 纳尼 =.= 

int main()
{
	double a;
	scanf("%lf",&a);
	printf("d:%d f:%f",sqrt(a),sqrt(a));
	return 0;
}
