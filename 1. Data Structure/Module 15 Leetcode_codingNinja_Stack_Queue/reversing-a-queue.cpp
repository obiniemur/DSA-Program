/*
https://www.naukri.com/code360/problems/reversing-a-queue_982934
*/

// My soulution

// #include <bits/stdc++.h>
// queue<int> reverseQueue(queue<int> q)
// {
//     // Write your code here.
//     queue<int> reverse;
//     stack<int> st;

//     while(!q.empty()){
//         st.push(q.front());
//         q.pop();
//     }

//     while(!st.empty()){
//         reverse.push(st.top());
//         st.pop();
//     }

//     return reverse;
// }

// Phitron solution

// #include <bits/stdc++.h>
// queue<int> reverseQueue(queue<int> q)
// {
//     // Write your code here.
//     stack<int> s;
//     while (!q.empty())
//     {
//         s.push(q.front());
//         q.pop();
//     }
//     while (!s.empty())
//     {
//         q.push(s.top());
//         s.pop();
//     }
//     return q;
// }