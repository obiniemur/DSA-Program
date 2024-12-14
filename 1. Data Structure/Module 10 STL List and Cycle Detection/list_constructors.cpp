#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;                     // empty initialization
    list<int> list2 = {1, 2, 3, 4, 5};    // initialize value
    int a[5] = {10, 20, 30, 40, 50};      // We will copy this array to list
    vector<int> v = {10, 20, 30, 40, 70}; // we will copy this vector to list too

    list<int> newList(10, 5); // it will initialize this list with 5, 10 times

    list<int> copyFromAnotherList(list2); // List 2 will copied here

    list<int> CopyFromArray(a, a + 5); // array a will be copied here. the argument is first element of array and size of array + first element

    list<int> copyFromVector(v.begin(), v.end()); // it will copy the vector to this list

    // Print the list using iterator. best use case when you need to the pointer address of a value

    for (auto it = newList.begin(); it != newList.end(); it++)
    {
        cout << *it << endl;
    }

    // best use cases for printing list

    for (int val : newList)
    {
        cout<< val << endl;
    }

    return 0;
}