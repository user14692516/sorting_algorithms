#include "sort.h"

/**
 * bubble_sort - Sorting an array.
 * @array: sorted array.
 * @size: array size
 * Return: NULL
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t k, l;

	if (array == NULL || size == 0)
		return;

	for (k = 0; k < size; k++)
	{
		for (l = 0; l < size - 1; l++)
		{
			if (array[l] > array[l + 1])
			{
				tmp = array[l];
				array[l] = array[l + 1];
				array[l + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
