#include<stdio.h>

int main(void)
{
	char a;

	printf("•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf_s("%c", &a);

	if (a >= 'A' && a <= 'Z')
	{
		printf("‘å•¶Žš‚ªŠÜ‚ß‚ê‚Ä‚¢‚Ü‚·B");
	}
	else if(a>='a'&& a<='z')
	{
		printf("‘å•¶Žš‚ªŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚¹‚ñB");
	}
	printf("‚Å‚·B\n");

	return 0;
}
