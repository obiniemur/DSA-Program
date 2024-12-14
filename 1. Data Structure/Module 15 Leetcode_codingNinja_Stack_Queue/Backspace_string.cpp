// /*

// https://leetcode.com/problems/backspace-string-compare/description/
// */

// // My solution

// class Solution
// {
// public:
//     bool backspaceCompare(string s, string t)
//     {

//         stack<char> s1;
//         stack<char> t1;

//         for (char c : s)
//         {
//             if (c != '#')
//             {
//                 s1.push(c);
//             }
//             else
//             {
//                 if (!s1.empty())
//                 {
//                     s1.pop();
//                 }
//             }
//         }

//         for (char c : t)
//         {
//             if (c != '#')
//             {
//                 t1.push(c);
//             }
//             else
//             {
//                 if (!t1.empty())
//                 {
//                     t1.pop();
//                 }
//             }
//         }

//         if (s1 == t1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };



// //Phitron Solution

// class Solution
// {
// public:
//     bool backspaceCompare(string s, string t)
//     {
//         stack<char> s1, s2;
//         for (char c : s)
//         {
//             if (c == '#')
//             {
//                 if (!s1.empty())
//                     s1.pop();
//             }
//             else
//             {
//                 s1.push(c);
//             }
//         }
//         for (char c : t)
//         {
//             if (c == '#')
//             {
//                 if (!s2.empty())
//                     s2.pop();
//             }
//             else
//             {
//                 s2.push(c);
//             }
//         }
//         return s1 == s2;
//     }
// };