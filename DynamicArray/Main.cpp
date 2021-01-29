#include <iostream>
#include "DynamicArray.h"

int main()
{
	DynamicArray<int> arr = DynamicArray<int>();
	arr.push(1);
	arr.push(6);
	arr.push(2);
	arr.push(4);
	arr.sort();
	int test = arr.pop();

	return 0;
}