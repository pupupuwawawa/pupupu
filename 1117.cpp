#include<stdio.h>

int main(void)
{
	char a;

	printf("文字を入力してください");
	scanf_s("%c", &a);

	if (a >= 'A' && a <= 'Z')
	{
		printf("大文字が含めれています。");
	}
	else if(a>='a'&& a<='z')
	{
		printf("大文字が含まれていません。");
	}
	printf("です。\n");

	return 0;
}
