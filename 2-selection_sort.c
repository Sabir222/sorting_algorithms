#include "sort.h"
/**
 * selection_sort - Sorting an arr because it's like organizing a chaotic
 * orchestra of integers into a harmonious melody.
 * @size: The size of the arr – because size matters even in sorting symphonies
 * @arr: The musical arr of numbers to arrange into a beautiful composition
 */

void selection_sort(int *arr, size_t size)
{
	size_t i, dex;
	int okt, swap, flag = 0;

	if (arr == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		okt = i;
		flag = 0;
		for (dex = i + 1; dex < size; dex++)
		{
			if (arr[okt] > arr[dex])
			{
				okt = dex;
				flag += 1;
			}
		}
		swap = arr[i];
		arr[i] = arr[okt];
		arr[okt] = swap;
		if (flag != 0)
			print_array(arr, size);
	}
}
