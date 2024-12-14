#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v){
    for(int val: v) cout<< val<< " ";
    cout<<endl;
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_index = v.size()-1;

        while(cur_index != 0)
        {
            int par_index = (cur_index - 1)/2;
            if(v[par_index] > v[cur_index]){
                swap(v[par_index], v[cur_index]);
            }else{
                break;
            }
            cur_index = par_index;
            
        }
    }
    print(v);
    return 0;
}