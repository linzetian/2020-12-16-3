//给定一个十进制的正整数n，输出n的各位数字之和。0<=n <=1000000000。样例:输入∶20151220输出结果:13
#include<stdio.h>
int main()
{
	int n = 0;
	int sum = 0;
	scanf("%d",&n);
	while (n > 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	printf("%d",sum);
	return 0;
}