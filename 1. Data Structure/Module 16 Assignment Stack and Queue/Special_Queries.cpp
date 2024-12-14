#include<bits/stdc++.h>
using namespace std;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int main()
{
    queue<string> q;
    
    int t;
    cin>>t;

   while(t--){
    
      string command;
        cin>>command;
        if(command == "0"){
            string name;
            cin>>name;
            q.push(name);
        }else if(command == "1"){
            if(!q.empty()){
               
                // cout<<"size before pop: "<<q.size()<<endl;
                cout<<q.front()<<endl;
                q.pop();
               
                // cout<<"size after pop: "<<q.size()<<endl;
           
            }else{
                 cout<<"Invalid"<<endl;
            }
        }
   }
    

    return 0;
}