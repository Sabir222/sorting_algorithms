#include "sort.h"
/**
 * selection_sort - Sorting an array because it's like organizing a chaotic
 * orchestra of integers into a harmonious melody.
 * @size: The size of the array – because size matters even in sorting symphonies
 * @array: The musical array of numbers to arrange into a beautiful composition
 */

void selection_sort(int *array, size_t size)
{
	size_t i, index;
	int tmp, swap, flag = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		tmp = i;
		flag = 0;
		for (index = i + 1; index < size; index++)
		{
			if (array[tmp] > array[index])
			{
				tmp = index;
				flag += 1;
			}
		}
		swap = array[i];
		array[i] = array[tmp];
		array[tmp] = swap;
		if (flag != 0)
			print_array(array, size);
	}
}
