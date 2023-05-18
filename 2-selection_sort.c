#include "sort.h"
/**
 * selection_sort - A function that sorts an array of integers
 * using the selecion sort algorithm
 * @array: array to be sorted
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, minimum, temp;

	for (i = 0; i < size - 1; i++)
	{
		minimum = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minimum])
				minimum = j;
		}
		if (minimum != i)
		{
			temp = array[minimum];
			array[minimum] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
