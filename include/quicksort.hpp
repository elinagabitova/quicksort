#include <iostream>
using namespace std;

template <typename Iterator>
void quickSort(Iterator left, Iterator right)
{
	Iterator i = left;
	Iterator j = right;
	Iterator center = *(first+(last-first)/2);
	while (i <= j)
	{
		while (*i < center) i++;
		while (*j > center) j--;
		if (i <= j)
		{
			iter_swap(i, j);
			i++;
			j--;
		}
	} 
	if (left < j) 
		quickSort(left, j);
	if (right > i) 
		quickSort(i, right);
}
