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
	int okt, swap, flag = 0;/* comment*/
	/* comment*/
	if (arr == NULL)/* comment*/
		return;
	for (i = 0; i < size; i++)/* comment*/
	{
		okt = i;/* comment*/
		flag = 0;/* comment*/
		for (dex = i + 1; dex < size; dex++)
		{
			if (arr[okt] > arr[dex])/* comment*/
			{
				okt = dex;/* comment*/
				flag += 1;/* comment*/
			}
		}
		swap = arr[i];/* comment*/
		arr[i] = arr[okt];/* comment*/
		arr[okt] = swap;/* comment*/
		/* comment*/
		if (flag != 0)
			print_array(arr, size);/* comment*/
	}
}
