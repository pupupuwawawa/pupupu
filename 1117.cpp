#include<stdio.h>

int main(void)
{
	char a;

	printf("��������͂��Ă�������");
	scanf_s("%c", &a);

	if (a >= 'A' && a <= 'Z')
	{
		printf("�啶�����܂߂�Ă��܂��B");
	}
	else if(a>='a'&& a<='z')
	{
		printf("�啶�����܂܂�Ă��܂���B");
	}
	printf("�ł��B\n");

	return 0;
}
