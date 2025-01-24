bool f(vector<int> &stalls , int dis , int k)
{
    int cnt = 1 , last = stalls[0];
    for(int i = 0 ; i < stalls.size() ; i++)
    {
      if (stalls[i] - last >= dis) {
        cnt++;
        last = stalls[i];
      }
      if (cnt >= k)
        return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin() , stalls.end());
    int n = stalls.size();
    int low = 1 , high = stalls[n-1] - stalls[0];
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(f(stalls , mid , k))
        low = mid + 1;
        else high = mid - 1;
    }
    return high;
}

int main(){
    vector<int> stalls;
    for(int i = 0 ; i < stalls.size() ; i++)
        cin >> stalls[i];
    int k;
    cin >> k;
    cout << aggressiveCows(stalls , k) << endl;
    return 0;
}
