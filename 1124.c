#include<stdio.h>
#include<string.h>

int main(void)
{
	char a〔100〕;

	printf("パスワードを設定してください");
	scanf_s("%99ｓ", a);
	
	int length=strlen(a)
	int uppercasecount = 0;
	int lowercasecount = 0;
	int digetcasecount = 0;

	for (int i = 0; i < length; i++) {
		if (a〔i〕 >= 'A' && a〔i〕 <= 'Z') {
			uppercasecount++;
		}
		else if (a〔i〕 >= 'a' && a〔i〕 <= 'z') {
			lowercasecount++;
		}
		else {
			digetcasecount++;
		}
	}
	
	if (uppercasecount > 0 && lowercasecount > 0 && digetcasecount > 0 && length >= 8 && length <= 16) {
		printf("登録が完了しました。")
	}
	else {
		printf("パスワードとして適切ではありません。");
	}

	return 0;
}
