#include <iostream>
#include <chrono>
//// My overcomplicated-ass pointer-and-reference-usin-ass way
//
//// Swaps two numbers
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void bubbleSort(int* array, int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		for (int j = length; j > i + 1; j--)
//			if (array[i] > array[j - 1])
//				swap(&array[i], &array[j - 1]);
//	}
//}
//
//int main()
//{
//	// Declare data array
//	int data[11] = { 293, 7651, 837, 2, 198572, 0, 987123, 72, 98, 9, 11 };
//	// Get length of data array
//	int length = sizeof(data) / sizeof(data[0]);
//	// Put it in a pointer
//	int* array = data;
//
//	// Get the time in nanoseconds before we sort
//	auto pre = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
//	// Sort the array
//	bubbleSort(array, length);
//	// Get the time in nanoseconds after we sort
//	auto post = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
//	// Get elapsed time
//	auto elapsed = post - pre;
//
//	// Print array
//	for (int i = 0; i < length; i++)
//	{
//		std::cout << array[i] << std::endl;
//	}
//
//	// Print elapsed time
//	std::cout << std::endl;
//	std::cout << elapsed << " nanoseconds elapsed" << std::endl;
//}

// The less overcomplicated-ass not pointer-usin-ass way I should have tried first god dammit
void bubbleSort(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = length; j > i; j--)
		{
			if (arr[i] > arr[j - 1])
			{
				int temp = arr[i];
				arr[i] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}

void printArray(int arr[], int length)
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << std::endl;
}

int main()
{
	const int length = 5;
	int arr[length] = { 1, 6, 3, 98, 458 };
	printArray(arr, length);
	bubbleSort(arr, length);
	std::cout << std::endl;
	printArray(arr, length);
}