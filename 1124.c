#include<stdio.h>
#include<string.h>

int main(void)
{
	char a�k100�l;

	printf("�p�X���[�h��ݒ肵�Ă�������");
	scanf_s("%99��", a);
	
	int length=strlen(a)
	int uppercasecount = 0;
	int lowercasecount = 0;
	int digetcasecount = 0;

	for (int i = 0; i < length; i++) {
		if (a�ki�l >= 'A' && a�ki�l <= 'Z') {
			uppercasecount++;
		}
		else if (a�ki�l >= 'a' && a�ki�l <= 'z') {
			lowercasecount++;
		}
		else {
			digetcasecount++;
		}
	}
	
	if (uppercasecount > 0 && lowercasecount > 0 && digetcasecount > 0 && length >= 8 && length <= 16) {
		printf("�o�^���������܂����B")
	}
	else {
		printf("�p�X���[�h�Ƃ��ēK�؂ł͂���܂���B");
	}

	return 0;
}
