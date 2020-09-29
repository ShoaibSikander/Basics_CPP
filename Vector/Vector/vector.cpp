#include <iostream>
#include <vector> 

using namespace std;

int main()
{
    cout << "Vectors ...!!!" << endl;
    cout << "\n-------------------------\n" << endl;

    cout << "6 ways of Initializing the Vectors ...!!!" << endl << endl;

    cout << "Method-1 --->> Initialize by pushing values one by one" << endl;
    vector<int> vector_1;
    vector_1.push_back(100);
    vector_1.push_back(200);
    vector_1.push_back(300);
    cout << "Vector: ";
    for (int x : vector_1)
        cout << x << " ";

    cout << endl << endl << "Method-2 --->> Specifying size and initializing all same values" << endl;
    int num = 3;
    vector<int> vector_2(num, 100);
    cout << "Vector: ";
    for (int x : vector_2)
        cout << x << " ";

    cout << endl << endl << "Method-3 --->> Initializing all elements with a particular value" << endl;
    vector<int> vector_3(3);
    int value = 500;
    fill(vector_3.begin(), vector_3.end(), value);
    for (int x : vector_3)
        cout << x << " ";

    cout << endl << endl << "Method-4 --->> Initializing like arrays" << endl;
    vector<int> vector_4{ 100, 200, 300 };
    for (int x : vector_4)
        cout << x << " ";

    cout << endl << endl << "Method-5 --->> Initializing from an array" << endl;
    int arr[] = { 100, 200, 300 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vector_5(arr, arr + n);
    for (int x : vector_5)
        cout << x << " ";

    cout << endl << endl << "Method-6 --->> Initializing from another vector" << endl;
    vector<int> vect{ 100, 200, 300 };
    vector<int> vector_6(vect.begin(), vect.end());
    for (int x : vector_6)
        cout << x << " ";

    cout << "\n-------------------------\n" << endl;

    int length = 6;
    vector<int> MyVector;
    for (int i=1; i<=length; i++)
        MyVector.push_back(i);

    cout << "Original Vector: ";
    for (int i=0; i<length; i++)
    {
        cout << MyVector[i] << " ";
    }
    cout << endl;

    // Getting first element of the vector
    auto val_1 = MyVector.begin();
    cout << "First element of the Vector: " << *val_1 << endl;

    // Getting last element of the vector
    auto val_2 = MyVector.rbegin();
    cout << "Last element of the Vector: " << *val_2 << endl;
    int val_3 = MyVector.back();
    cout << "Last element of the Vector: " << val_3 << endl;
    int val_4 = MyVector.size();
    cout << "Last element of the Vector: " << MyVector[val_4 - 1] << endl;

    cout << "\n-------------------------\n" << endl;

    cout << "\nDisplay all elements of the vector using begin() and end(): ";
    for (auto i = MyVector.begin(); i != MyVector.end(); ++i)
        cout << *i << " ";

    cout << "\nDisplay all elements of the vector using cbegin() and cend(): ";
    for (auto i = MyVector.cbegin(); i != MyVector.cend(); ++i)
        cout << *i << " ";

    cout << "\nDisplay all elements of the vector using rbegin() and rend(): ";
    for (auto ir = MyVector.rbegin(); ir != MyVector.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nDisplay all elements of the vector using crbegin() and crend()";
    for (auto ir = MyVector.crbegin(); ir != MyVector.crend(); ++ir)
        cout << *ir << " ";

    cout << "\n-------------------------\n" << endl;

    // begin(), end(), rbegin(), rend() return iterators
    // cbegin(), cend(), crbegin(), crend() return const_iterators

    cout << "\nSubtracting 1 from each element of the Vector ...!!!\n";
    for (auto i = MyVector.begin(); i != MyVector.end(); ++i)
        *i = *i-1;

//    cout << "\nSubtracting 1 from each element of the array ...!!!";      // Gives Error 
//    for (auto i = MyVector.cbegin(); i != MyVector.cend(); ++i)           // Gives Error
//        *i = *i - 1;                                                      // Gives Error

    cout << "\nDisplay all elements of the vector using begin() and end(): ";
    for (auto i = MyVector.begin(); i != MyVector.end(); ++i)
        cout << *i << " "; 

    cout << "\nDisplay all elements of the vector using cbegin() and cend(): ";
    for (auto i = MyVector.cbegin(); i != MyVector.cend(); ++i)
        cout << *i << " ";

    cout << "\nDisplay all elements of the vector using rbegin() and rend(): ";
    for (auto ir = MyVector.rbegin(); ir != MyVector.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nDisplay all elements of the vector using crbegin() and crend()";
    for (auto ir = MyVector.crbegin(); ir != MyVector.crend(); ++ir)
        cout << *ir << " ";

    cout << "\n-------------------------\n" << endl;

    // Display the number of elements in the vector
    cout << "Size : " << MyVector.size() << endl;

    // Display the maximum number of elements that the vector can hold
    cout << "Max_Size : " << MyVector.max_size() << endl;

    // Display the size of the storage space currently allocated to the vector expressed as number of elements
    cout << "Capacity : " << MyVector.capacity() << endl;
    
    cout << "\n-------------------------\n" << endl;

    // Resizes the vector size to 4 
    cout << "Resizing the Vector ...!!!" << endl;
    MyVector.resize(4);
    cout << "\nDisplay all elements of the vector using begin() and end(): ";
    for (auto i = MyVector.begin(); i != MyVector.end(); ++i)
        cout << *i << " ";
    // Display the vector size and capacity after resize() 
    cout << "\nSize : " << MyVector.size() << endl;
    cout << "Capacity : " << MyVector.capacity() << endl;

    cout << "\n-------------------------\n" << endl;

    // Check if the vector is empty or not 
    if (MyVector.empty() == true)
        cout << "Vector is empty" << endl;
    else
        cout << "Vector is not empty" << endl;

    cout << "\n-------------------------\n" << endl;

    // Shrinks the vector by Reducing the capacity of the vector to fit its size and destroys all elements beyond the capacity
    MyVector.shrink_to_fit();
    cout << "Display all elements of the vector using begin() and end(): ";
    for (auto it = MyVector.begin(); it != MyVector.end(); it++)
        cout << *it << " ";
    // Display the vector size and capacity after shrink_to_fit()
    cout << "\nSize : " << MyVector.size() << endl;
    cout << "Capacity : " << MyVector.capacity() << endl;

    cout << "\n-------------------------\n" << endl;

    // Accessing vector elements
    cout << "First element of the vector: " << MyVector.front() << endl;
    cout << "Last element of the vector: " << MyVector.back() << endl;
    cout << "Second element of the vector: " << MyVector[1] << endl;
    cout << "Second element of the vector: " << MyVector.at(1) << endl;

    cout << "\n-------------------------\n" << endl;

    // Pointer to the first element of vector 
    int* pos = MyVector.data();
    cout << "First element of the vector: " << *pos << endl;
    cout << "Address of the first element of vector: " << pos << endl;

    cout << "\n-------------------------\n" << endl;

    cout << "Removing all elements of the Vector ...!!!" << endl;
    // Remove all the elements of the vector container
    MyVector.clear();
    cout << "Display all elements of the vector using cbegin() and cend(): ";
    for (auto it = MyVector.cbegin(); it != MyVector.cend(); it++)
        cout << *it << " ";
    // Display the vector size and capacity after clear()
    cout << "\nSize : " << MyVector.size() << endl;
    cout << "Capacity : " << MyVector.capacity() << endl;

    cout << "\n-------------------------\n" << endl;

    cout << "Making a vector with all the same elements ...!!!" << endl;
    // Assigns same values to the vector elements
    MyVector.assign(7, 10);
    cout << "Vector: ";
    for (auto it = MyVector.cbegin(); it != MyVector.cend(); it++)
        cout << *it << " ";
    // Display the vector size and capacity after assign()
    cout << "\nSize : " << MyVector.size() << endl;
    cout << "Capacity : " << MyVector.capacity() << endl;

    cout << "\n-------------------------\n" << endl;

    cout << "Appending a value to the Vector ...!!!" << endl;
    // Insert a value at the last position 
    MyVector.push_back(500);
    cout << "Vector: ";
    for (auto it = MyVector.cbegin(); it != MyVector.cend(); it++)
        cout << *it << " ";
    // Display the vector size and capacity after assign()
    cout << "\nSize : " << MyVector.size() << endl;
    cout << "Capacity : " << MyVector.capacity() << endl;

    cout << "\n-------------------------\n" << endl;

    cout << "Removing last value of the Vector ...!!!" << endl;
    // Remove the last value 
    MyVector.pop_back();
    cout << "Vector: ";
    for (auto it = MyVector.cbegin(); it != MyVector.cend(); it++)
        cout << *it << " ";
    // Display the vector size and capacity after assign()
    cout << "\nSize : " << MyVector.size() << endl;
    cout << "Capacity : " << MyVector.capacity() << endl;

    cout << "\n-------------------------\n" << endl;

    cout << "Inserting a value at the beginning of Vector ...!!!" << endl;
    // Insert a value at the beginning 
    MyVector.insert(MyVector.begin(), 500);
    cout << "Vector: ";
    for (auto it = MyVector.cbegin(); it != MyVector.cend(); it++)
        cout << *it << " ";
    // Display the vector size and capacity after assign()
    cout << "\nSize : " << MyVector.size() << endl;
    cout << "Capacity : " << MyVector.capacity() << endl;

    cout << "\n-------------------------\n" << endl;

    cout << "Removing first element of the Vector ...!!!" << endl;
    // Remove a value from the beginning 
    MyVector.erase(MyVector.begin());
    cout << "Vector: ";
    for (auto it = MyVector.cbegin(); it != MyVector.cend(); it++)
        cout << *it << " ";
    // Display the vector size and capacity after assign()
    cout << "\nSize : " << MyVector.size() << endl;
    cout << "Capacity : " << MyVector.capacity() << endl;

    cout << "\n-------------------------\n" << endl;

    cout << "Inserting a value at the beginning of Vector ...!!!" << endl;
    // Extend the vector by inserting new element at position
    MyVector.emplace(MyVector.begin(), 300);
    cout << "Vector: ";
    for (auto it = MyVector.cbegin(); it != MyVector.cend(); it++)
        cout << *it << " ";
    // Display the vector size and capacity after assign()
    cout << "\nSize : " << MyVector.size() << endl;
    cout << "Capacity : " << MyVector.capacity() << endl;

    cout << "\n-------------------------\n" << endl;

    cout << "Insert element at the end of Vector ...!!!" << endl;
    // Insert a new element at the end of the vector
    MyVector.emplace_back(200);
    cout << "Vector: ";
    for (auto it = MyVector.cbegin(); it != MyVector.cend(); it++)
        cout << *it << " ";
    // Display the vector size and capacity after assign()
    cout << "\nSize : " << MyVector.size() << endl;
    cout << "Capacity : " << MyVector.capacity() << endl;

    cout << "\n-------------------------\n" << endl;

    return 0;
}