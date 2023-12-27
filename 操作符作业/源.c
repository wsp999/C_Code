//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void walk(int num,int*i)
{
	if (num <= 1) ;
	else
	{
		//*i = *i +2;
		//walk(num - 1, i);
		//walk(num - 2, i);错误的，算的是分叉数
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	walk(num,&i);
	printf("%d", i);
}