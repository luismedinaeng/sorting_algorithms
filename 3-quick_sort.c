#include "sort.h"

/**
 * quick_sort - Implements a quick sort algorithm over an array
 * @array: Array to apply the sort
 * @size: Size of the array
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursion(array, 0, size - 1, size);
}

/**
 * quick_sort_recursion - Implements a quick sort over an array using recursion
 * @array: Array to apply the sort
 * @i_lo: Lowest index
 * @i_hi: Highest index
 * @s: Size of the array
 *
 * Return: Nothing
 */
void quick_sort_recursion(int *array, size_t i_lo, size_t i_hi, size_t s)
{
	size_t p;

	if (i_lo < i_hi)
	{
		p = quick_partition(array, i_lo, i_hi, s);
		quick_sort_recursion(array, i_lo, p == 0 ? p : p - 1, s);
		quick_sort_recursion(array, p + 1, i_hi, s);
	}
}

/**
 * quick_partition - Makes the partition in the vector for quick sort algorithm
 * @array: Array to apply the sort
 * @i_lo: Lowest index
 * @i_hi: Highest index
 * @s: Size of the array
 *
 * Return: The final index of the pivot
 */
size_t quick_partition(int *array, size_t i_lo, size_t i_hi, size_t s)
{
	size_t i, j = i_lo;
	int pivot = array[i_hi];
	int tmp;

	for (i = i_lo; i < i_hi; i++)
	{
		if (array[i] <= pivot)
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, s);
			}
			j++;
		}
	}
	if (i_hi != j)
	{
		array[i_hi] = array[j];
		array[j] = pivot;
		print_array(array, s);
	}
	return (j);
}
