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
   /*
   stack<int> st;
   st.push(2); // 2
   st.push(0); // 0 2
   st.emplace(1);  // 1 0 2
   cout << st.top() ; // 1

   st.pop() // 0 2
   st.size() 
   cout << st.empty(); // false
   stack<int>st2;
   st1.swap(st2); // Both stacks swap with each other 
   */
   /*
   queue<int>q;
   q.push(1); // 1
   q.push(2); // 1 2 
   q.emplace(5);  // 1 2 5 
   q.push(7);  // 1 2 5 7 

   q.back() += 8; // 1 2 5 15 
   q.pop(); // 1 2 5 

   cout << q.front(); // 1 
   cout << q.back(); // 5
   */
   /*
   priority_queue<int>pq;  // Also called Max Heap
   pq.push(1); // 1
   pq.push(3); // 3 1 
   pq.emplace(8); // 8 3 1 
   pq.push(2); // 8 3 2 1

   cout << pq.top(); // 8
   pq.pop(); // 3 2 1
   
   priority_queue<int , vector<int> , greater<int>> pq; // Min Heap
   pq.push(2); // 2 
   pq.push(1); // 1 2 
   pq.emplace(0); // 0 1 2 
   pq.push(9); // 0 1 2 9
   cout << pq.top(); // 0
   */
   /*
   set<int>st;
   st.insert(2); // 2
   st.insert(2); // 2 
   st.emplace(2); // 2 
   st.insert(1); // 1 2 
   st.insert(8); // 1 2 8

   st.erase(2); // 1 8 
   auto it = st.find(8); 
   st.erase(it); // 1 

   int i = st.count(8); // false
   st.insert(7); // 1 7
   st.insert(4); // 1 4 7

   auto it1 = st.find(1);
   auto it2 = st.find(4); 
   st.erase(it1 , it2); // 7
   */
   /*
   multiset<int> ms;
   ms.insert(2); // 2
   ms.insert(4); // 2 4 
   ms.insert(2); // 2 2 4
   ms.insert(1); // 1 2 2 4
   ms.emplace(75);  // 1 2 2 4 75

   ms.erase(2); // 1 4 75 It will delete all the 2s
   ms.erase(ms.find(2)); // 1 2 4 75 It will just delete one 2
   ms.erase(ms.find(1) , ms.find(1)+2); // 2 4 75 It will delete from range. 
   */
   /*
   unordered_set<int> us; 
   1. Same as set. 
   2. It doesnt follow any order. 
   3. It stores unique elements.
      Always TC O(1) except in some time O(N) only once in a blue moon. 
   */
   /*
   map<int> mp;  
   1. It is a {Key, Value} pair. 
   map<int , pair<int,int>> mp;
   map<pair<int,int> , int> mp; 
   mp[1] = 2; 
   mp.emplace({2,6}); 
   mp.insert({8 43}); 
   mp.insert({2,54} , 21); 

   for(auto it : mp)
      cout << it.first << endl;
      cout << it.end << endl;
   auto it = mp.find(2); 
   cout << *it.second << endl;

   auto it = mp.lower_bound(1);
   auto it = mp.upper_bound(3); 
   */
   /*
   Multimap and Unordered Map are same as MAP. 
   Unordered Map TC is O(1) in all cases. Once in a blue moon it is O(N). 
   */

   ALGORITHMS:- 

   sort(a , a+n); 
   sort(v.begin() , v.end()); 
   sort(a+2 , a+n); 
   // all are ascending order sorting above 

   sort(a , a+n , greater<int>); // sorting in descending order

   int maxi = *max_element(a , a+n); // max elem
   int mini = *mini_element(a , a+n); // min elem

   bool comp(pair<int , int> p1 , pair<int, int> p2)
   {
      if(p1.second < p2.second) return true;
      if(p2.second < p1.second) return false; 
      if(p1.first < p2.first) return true; 
      return false; 
   }
   sort(a , a+n , comp); // sorting by your own choice using comparator func. 

   int count = __builtin_popcount(); // This will tell no. of set digits in binary conversion. 
   long long count = __builtin_popcountll(); //For long long numbers. 

   string s = "123"
   do {
      cout << s << endl;
   } while(next_permutation(s.begin() , s.end())); // Next Permutation Code 
      
   return 0; 
}
