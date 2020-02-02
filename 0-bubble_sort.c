#include "sort.h"

/**
 * bubble_sort - Implements the bubble sort algorithm for array of integers
 * @array: The array loaded with integers numbers
 * @size: The element's number of the array.
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	/* bool flag = true; */
	size_t i;
	int tmp;
	bool swapped = true;

	if (array == NULL || size < 2)
		return;

	while (swapped)
	{
		swapped = false;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				swapped = true;
			}
		}
	}
}
