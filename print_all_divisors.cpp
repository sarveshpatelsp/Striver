#include <iostream>
using namespace std;

vector<int> divisors(int n , vector<int>&ans)
{
  for (i = 1 ; i < sqrt(n) ; i++)
    {
      if(n%i == 0) {
        ans.push_back(i);
        if((n/i) != i) 
          ans.push_back(n/i); 
      }
    }
  sort(ans.begin() , ans.end()); 
  return ans;
}
int main(){
  int n;
  cin >> n;
  vector<int>ans; 
  divisors(n , ans); 
  for(auto it: ans)
    cout << it << " "; 
  return 0;
}
