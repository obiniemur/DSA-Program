// /*
// https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771?leftPanelTabValue=SUBMISSION
// */

// #include <bits/stdc++.h>

// queue<int> reverseElements(queue<int> q, int k)
// {
//     // Write your code here.
//     stack<int> s;
//     queue<int> qf;

//     while (k--)
//     {

//         s.push(q.front());
//         q.pop();
//     }

//     while (!s.empty())
//     {
//         qf.push(s.top());
//         s.pop();
//     }

//     while (!q.empty())
//     {
//         qf.push(q.front());
//         q.pop();
//     }

//     return qf;
// }
