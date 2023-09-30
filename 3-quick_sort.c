#include "sort.h"

/**
 * swap - swapping two integers.
 * @a: int
 * @b: int
 * Return: NULL
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * partition - partitioning an array
 * @array: Array
 * @low: int
 * @high: int
 * @size: array size
 * Return: pivot index.
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int m = low - 1, p;

	for (p = low; p <= high; p++)
	{
		if (array[p] <= pivot)
		{
			m++;
			if (m != p)
			{
				swap(&array[m], &array[p]);
				print_array(array, size);
			}
		}
	}
	return (m);
}
/**
 * lomuto_qsort - recursively sorting an array
 * @array: array to be sorted
 * @low: The lowest value of the array
 * @high: highest value of the array
 * @size: array size 
 * Return: NULL
 */
void lomuto_qsort(int *array, int low, int high, size_t size)
{
	int k;

	if (low < high)
	{
		k = partition(array, low, high, size);
		lomuto_qsort(array, low, k - 1, size);
		lomuto_qsort(array, k + 1, high, size);
	}
}
/**
 * quick_sort - quick sort of algorithms
 * @array: sorting of an array 
 * @size: array size
 * Return: sorted array.
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}
