#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    v.erase(v.begin()+2, v.end());
    for(int s:v){
        cout<<s<<endl;
    }
    return 0;
}