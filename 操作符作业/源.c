//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void walk(int num,int*i)
{
	if (num <= 1) ;
	else
	{
		//*i = *i +2;
		//walk(num - 1, i);
		//walk(num - 2, i);����ģ�����Ƿֲ���
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