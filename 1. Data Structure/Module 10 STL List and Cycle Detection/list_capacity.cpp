#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30};
    cout << myList.size()<<endl;;
    cout << myList.max_size()<<endl;

    // myList.clear();

    myList.resize(2);
    myList.resize(10, 90);

    for(int val: myList){
        cout<< val <<endl;
    }
    return 0;
}