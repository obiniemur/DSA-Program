/*
https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875
*/

// void reverseStack(stack<int> &s)
// {
//     // Write your code here
//     if (s.empty())
//         return;
//     int x = s.top();
//     s.pop();
//     reverseStack(s);
//     // reverse hoye gse
//     stack<int> cp;
//     while (!s.empty())
//     {
//         cp.push(s.top());
//         s.pop();
//     }
//     cp.push(x);
//     while (!cp.empty())
//     {
//         s.push(cp.top());
//         cp.pop();
//     }
// }