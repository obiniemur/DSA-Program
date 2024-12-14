// /*
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/1319985868/
// */


// class Solution {
// public:
//     string removeDuplicates(string s) {

//         stack<char> st;
//         for(char c : s) 
//         {
//             if(st.empty()){
//                 st.push(c);
//             }else{
//                 if(c == st.top()){
//                     st.pop();
//                 }else{
//                     st.push(c);
//                 }
//             }
//         }

//         stack<char> s1;

    
//         while(!st.empty()){
//             s1.push(st.top());
//             st.pop();
//         }
        
//         string ans = "";
//         while(!s1.empty()){
//             ans += s1.top();
//             s1.pop();
//         }

//         return ans;
//     }
// };