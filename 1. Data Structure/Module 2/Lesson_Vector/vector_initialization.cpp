#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; //type 1
    // vector<int>v(5); // type 2 using constructor
    // vector<int> v(5,10); //type 3, adding value with size
    
    /*Type 4
    assigning one vector value to another
    vector<int> v2(6,100);
    vector<int>v(v2);
    */

   /*Type 5
    assigning an array value to another
    int a[6]  = {1,2,3,4,5,6};
    vector<int>v(a, a+6);
    */

   vector<int> v = {2,3,4,5,6,6,9};

   for (int i = 0; i < v.size(); i++)
   {
    cout<<v[i]<<endl;
   }
   


    return 0;
}