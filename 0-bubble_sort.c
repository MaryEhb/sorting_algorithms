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
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
				printf("\n");
			}
		}
	}
}
