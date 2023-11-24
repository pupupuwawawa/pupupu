#include<stdio.h>
#include<string.h>

int main(void)
{
	char ak100l;

	printf("ƒpƒXƒ[ƒh‚ğİ’è‚µ‚Ä‚­‚¾‚³‚¢");
	scanf_s("%99‚“", a);
	
	int length=strlen(a)
	int uppercasecount = 0;
	int lowercasecount = 0;
	int digetcasecount = 0;

	for (int i = 0; i < length; i++) {
		if (akil >= 'A' && akil <= 'Z') {
			uppercasecount++;
		}
		else if (akil >= 'a' && akil <= 'z') {
			lowercasecount++;
		}
		else {
			digetcasecount++;
		}
	}
	
	if (uppercasecount > 0 && lowercasecount > 0 && digetcasecount > 0 && length >= 8 && length <= 16) {
		printf("“o˜^‚ªŠ®—¹‚µ‚Ü‚µ‚½B")
	}
	else {
		printf("ƒpƒXƒ[ƒh‚Æ‚µ‚Ä“KØ‚Å‚Í‚ ‚è‚Ü‚¹‚ñB");
	}

	return 0;
}
