#include "sort.h"

/**
 * selection_sort - Implements a selection sort algorthim over an array
 * @array: Array to apply the search
 * @size: Size of the array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	int i, j, i_min;

	for (i = 0; i < size; i++)
	{
		i_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i_min])
				i_min = j;
		}
		if (i != i_min)
		{
			j = array[i];
			array[i] = array[i_min];
			array[i_min] = j;
			print_array(array, size);
		}
	}
}
