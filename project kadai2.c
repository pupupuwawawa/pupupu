#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	srand(time(0));

	int intelligence = (rand() % 20) + 1;
	int stamina = (rand() % (20 - intelligence));
	int charisma = (20 - intelligence - stamina);

	if (intelligence > stamina && intelligence > charisma) {
		printf("mage");
	}

	else if (stamina > intelligence && stamina > charisma) {
		printf("knight");
	}

	else if (charisma > intelligence && charisma > stamina) {
		printf("thief");
	}

	else {
		printf("god");
	}

	printf("intelligence=%d,stamina=%d,charisma=%d", intelligence, stamina, charisma);

	return 0;
}
