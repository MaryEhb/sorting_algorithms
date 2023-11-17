#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - unction that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array of int
 * @size: array size
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, tmp;

	if (!array || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
