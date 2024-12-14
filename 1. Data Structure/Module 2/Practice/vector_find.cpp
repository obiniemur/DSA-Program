#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int old_value;
    int new_value;
    int find_value;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cin>>old_value>>new_value;
    cin>>find_value;
    replace(v.begin(), v.end(), old_value, new_value);
    for(int val: v){
        cout<<val<<" ";
    }

cout<<endl;
    auto it = find(v.begin(), v.end(), find_value);
    cout<<"index is: "<<*it<<endl;



   

    cout<<endl<<"New Value: "<<new_value<<endl<<"Old Value: "<<old_value<<endl<<"Find Value: "<<find_value<<endl;
    return 0;
}