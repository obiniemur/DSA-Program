#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 70, 90};
    list<int> myList2 = {10, 20, 30, 40, 70, 90};
    myList.pop_back();
    myList.pop_front();

    myList.insert(next(myList.begin(),3), 100); //insert single
    myList.erase(next(myList.begin(),2));

    myList.insert(next(myList.begin(),3), {100, 200, 300}); //insert multiple
    myList2.insert(next(myList2.begin(),0), myList.begin(), myList.end()); //insert multiple

    for(int val : myList){
        cout<< val <<endl;
    }
cout<<"next"<<endl;
    for(int val : myList2){
        cout<< val <<endl;
    }
    return 0;
}