#include <iostream>

using namespace std;

template <typename DataType1, typename DataType2>
void PrintArray(DataType1 arr[], DataType2 length)
{
	cout << " " << endl;
	for (int n = 0; n < length; ++n)
	{
		cout << arr[n] << ' ';
	}
}

int main()
{
	cout << "Arrays ...!!!" << endl;

	cout << "\n-------------------------" << endl;

	// Array declaration by specifying size (int arr)
	int array1[10];
	// Finding the size of array using built-in "sizeof" function
	int size1 = sizeof(array1) / sizeof(array1[0]);
	cout << "Size of Array-1: " << size1 << endl;
	// Finding the size of array using pointer arithmetic
	size1 = *(&array1 + 1) - array1;
	cout << "Size of Array-1: " << size1 << endl;
	// Printing the full array using a for-loop
	for (int i = 0; i < size1; i++)
	{
		cout << array1[i] << " ";
	}
	// Printing the full array using a template function
	// 1st way of calling the template
	PrintArray(array1, size1);
	// 2nd way of calling the template
	PrintArray<int, int>(array1, size1);

	cout << "\n-------------------------" << endl;

	// Array declaration by initializing elements (char array)
	char array2[] = { 'a', 'b', 'c', 'd', 'e' };
	// Finding the size of array using built-in "sizeof" function
	int size2 = sizeof(array2) / sizeof(array2[0]);
	cout << "Size of Array-2: " << size2 << endl;
	// Finding the size of array using pointer arithmetic
	size2 = *(&array2 + 1) - array2;
	cout << "Size of Array-2: " << size2 << endl;
	// Printing the full array using a for-loop
	for (int i = 0; i < size2; i++)
	{
		cout << array2[i] << " ";
	}
	// Printing the full array using a template function
	// 1st way of calling the template
	PrintArray(array2, size2);
	// 2nd way of calling the template
	PrintArray<char, int>(array2, size2);


	cout << "\n-------------------------" << endl;

	// Array declaration by specifying size and initializing elements (string array)
	string array3[7] = { "Toyota", "Hyundai", "BMW", "Mercedes" };
	// Finding the size of array using built-in "sizeof" function
	int size3 = sizeof(array3) / sizeof(array3[0]);
	cout << "Size of Array-3: " << size3 << endl;
	// Finding the size of array using pointer arithmetic
	size3 = *(&array3 + 1) - array3;
	cout << "Size of Array-3: " << size3 << endl;
	// Printing the full array using a for-loop
	for (int i = 0; i < size3; i++)
	{
		cout << array3[i] << " ";
	}
	// Printing the full array using a template function
	// 1st way of calling the template
	PrintArray(array3, size3);
	// 2nd way of calling the template
	PrintArray<string, int>(array3, size3);

	cout << "\n-------------------------" << endl;

	return 0;
}
