//�̤p������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int LCM(int,int);		//�ŧi�Ƶ{��
int main()
{
	int a, b, c;
	printf("Enter two integers(in order to take the least common multiple):");	scanf("%d %d", &a, &b);
	c = LCM(a, b);
	printf("The least common multiple is %d\n",c);
	system("pause");
	return 0;
}
int LCM(int x, int y)  //�̤p�����ưƵ{��
{
	int z, s;
	s = x*y;
	while (y != 0)
	{
		z = x%y;
		x = y;
		y = z;
	}
	return (s/x);
}
