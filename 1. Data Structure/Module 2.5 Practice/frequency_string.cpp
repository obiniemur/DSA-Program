#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> v(26);

    for(char val:s){
        v[val-'a']++;
    }

 for(int i='a'; i<='z'; i++){

   if(v[i-'a']>0){
     cout<<(char)i<<" : " <<v[i-'a']<<endl;
   }
 }

    return 0;
}