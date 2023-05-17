#include "sort.h"

/**
 * bubble_sort - function to bubble sort algorithm
 * @array: The array to be sorted.
 * @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
    int temp;
    size_t i, j;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                print_array(array, size);
            }
        }
    }
}