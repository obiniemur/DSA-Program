#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(12);
    for(int i=0; i<10; i++){
    
        cin>>v[i];
  
    }
     cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;
    v.resize(20);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(0);

cout<<"after"<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.clear();

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    // v.resize(10, 100);
    int h = v.empty();
    cout<<h<<"he"<<endl;

    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}