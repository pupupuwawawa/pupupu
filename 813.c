#include<float.h>
#include<stdio.h>

int main(void)
{
	int i;
	double max_weight, min_weight;
	double weight[3];

	weight[0] = 72.0;
	weight[1] = 101.5;
	weight[2] = 52.4;

	max_weight = -DBL_MAX;
	min_weight = DBL_MAX;

	for (i = 0; i < 3; i++)
	{
		if (weight[i] >= max_weight)
		{
			max_weight = weight[i];
		}
		if (weight[i] <= min_weight)
		{
			min_weight = weight[i];
		}
	}

	printf("1�ԏd���l��,%g kg�ł�.\n", max_weight);
	printf("1�Ԍy���l��,%g kg�ł�.\n", min_weight);

	return 0;
}