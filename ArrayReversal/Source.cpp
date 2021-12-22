#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, *arr, i;
	scanf("%d", &num);
	arr = (int*)malloc(num * sizeof(int));
	for (i = 0; i < num; i++) {
		scanf("%d", arr + i);
	}

	int numhalf = num / 2;
	int j, temp;
	for (i = 0, j = num - 1; i < numhalf; i++, j--) {
		temp = *(arr + j);
		*(arr + j) = *(arr + i);
		*(arr + i) = temp;
	}


	for (i = 0; i < num; i++)
		printf("%d ", *(arr + i));

	free(arr);

	return 0;
}