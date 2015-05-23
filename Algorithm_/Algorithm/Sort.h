
#ifndef _SORT_H_
#define _SORT_H_

#include <iostream>

/*select the index of minimum every round, and exchange the value 
* to the first element of this round
*/
template < typename T >
void select_sort(T arr[], size_t length)
{
	///
	for (size_t i = 0; i < length -1 ; ++i)
	{
		///cursor of traversal
		size_t index = i;
		for (size_t j = i + 1; j < length; ++j)
		{
			///chooset the minimum value 
			if (arr[j] < arr[index])
				index = j;
		}
		std::swap(arr[index], arr[i]);
	}
}

/*
*/
#endif