/*
STL mainly contains four parts: 
1. Containers : pairs, vectors, stack, queue, dequeue, priority queue, list, map, unordered, multi, set 
2. Iterators : begin(), end(), rbegin(), rend() 
3. Algorithms : sort(), 
4. Functions : No need to learn. 

-> auto keyword automatically detects the desired data type used in place; 
-> push_back and emplace_back in vector both of them are similar, Push the values in vector.
-> emplace_back are more faster than push_back. 
-> emplace_back dont need a curly brackets to push the pair values but push_back needs. 
-> insert() func in vecotrs is very costly, using it is not a good practice. 
-> In iterator end() func means a one step ahead. 
-> For vectors, SLL is maintained in internal func. 
-> For list, DLL is maintained in internal func.
-> 
*/

#include <bits/stdc++.h>
using namespace std; 

int main()
{
   /* pair<int,int>p; 
    cout << p.first << " " << p.second << endl; 
    pair<int, pair<int,int>>pp; 
    cout << pp.first << " " << p.second.first << " " << p.second.second << endl;
    vector<int>v; 
    for (auto it : v)
        cin >> it ; 
    for (auto it : v)
        cout << it << " " ; 
   */
   /*
    vector<int> v;
    v.push_back(4);
    v.emplace_back(5); 

    vector<pair<int,int>>v;
    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int>v(5,100); // it will print 100 five times 
    vector<int>v(5); // It will print 0 or garbage values five times 
    vector<int>v1(4 , 2);
    vector<int>v2(v1); // It will copy the v1 vector in v2
   */
   /*
   list<int> l;
   l.push_back(2); // 2
   l.emplace_back(4); // 2 4
   l.push_front(5) // 5 2 4
   l.emplace_front(7) // 7 5 2 4
   // Rest func are same as vector like rbegin , rend , begin , end , clear , insert , size , swap
   */
   /*
   deque<int>dq;
   dq.push_back(2); // 2
   dq.emplace_back(4); // 2 4 
   dq.push_front(3);  // 3 2 4
   dq.push_back(1);  // 3 2 4 1 
   dq.emplace_front(6); // 6 3 2 4 1

   dq.pop_front(); // 3 2 4 1
   dq.pop_back();  // 3 2 4
   
   cout << dq.back(); // 4
   cout << dq.front(); // 3
   // Rest func are same as vector
   */
   
   return 0;
}
