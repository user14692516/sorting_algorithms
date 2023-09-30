#include "sort.h"

/**
 * locate_min - locating the min.
 * @array: array that is supposed to be searched.
 * @index: index of the search
 * @size: array size
 * Return: (int) index of min if found
 */

int locate_min(int *array, int index, size_t size)
{
	int min, idx_min;
	int k;

	min = array[index];
	idx_min = index;
	for (k = index; k < (int)size; k++)
	{
		if (array[k] < min)
		{
			min = array[k];
			idx_min = k;
		}
	}
	if (idx_min == index)
		return (-1);
	return (idx_min);
}


/**
 * selection_sort - Implementing selection sort.
 * @array: an array
 * @size: array size
 *
 * Return: NULL
 */
void selection_sort(int *array, size_t size)
{
	int k;
	int min, tmp;

	for (k = 0; k < (int)size; k++)
	{
		min = locate_min(array, k, size);
		if (min != -1)
		{
			tmp = array[k];
			array[k] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
