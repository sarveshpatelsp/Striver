/*
STL mainly contains four parts: 
1. Containers : pairs, vectors, stack, queue, dequeue, priority queue, list, map, unordered, multi, set 
2. Iterators : begin(), end(), rbegin(), rend() 
3. Algorithms : sort(), 
4. Functions : No need to learn. 

-> auto keyword automatically detects the desired data type used in place; 
-> 

*/

#include <bits/stdc++.h>
using namespace std; 

int main()
{
    pair<int,int>p; 
    cout << p.first << " " << p.second << endl; 
    pair<int, pair<int,int>>pp; 
    cout << pp.first << " " << p.second.first << " " << p.second.second << endl;
    vector<int>v; 
    for (auto it : v)
        cin >> it ; 
    for (auto it : v)
        cout << it << " " ; 
    
    return 0;
}
