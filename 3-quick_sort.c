#include <stdio.h>
#include "sort.h"
void
swap(int *a, int *b, int *array, size_t size)
{
	int temp = *a;

	*a = *b;
	*b = temp;
	print_array(array, size);
}
int
lomuto(int *array, size_t size, int low, int high)
{
	int pi = array[high];
	int i = (low - 1), j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pi)
		{
			i++;
			if (i != j && i >= 0)
				swap(&array[i], &array[j], array, size);
		}
	}
	if (array[high] != array[i + 1])
		swap(&array[i + 1], &array[high], array, size);
	return (i + 1);
}
void
recursion(int *array, size_t size, int low, int high)
{
	int pivot;

	if (high > low)
	{
		pivot = lomuto(array, size, low, high);
		recursion(array, size, low, pivot - 1);
		recursion(array, size, pivot + 1, high);
	}
}
void
quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1;
	/* se llama a la funcion encargada de la recursion */
	recursion(array, size, low, high);
}
