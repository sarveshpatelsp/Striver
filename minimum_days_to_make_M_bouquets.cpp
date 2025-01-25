bool possible(vector<int>& bloomDay, int mid, int m, int k) {
        int cnt = 0;
        int noOfB = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid)
                cnt++;
            else {
                noOfB += (cnt / k);
                cnt = 0;
            }
        }
        noOfB += (cnt / k);
        return noOfB >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1LL * k * 1LL;
        if (val > bloomDay.size())
            return -1;
        int mini = *min_element(bloomDay.begin(), bloomDay.end());
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());
        int low = mini, high = maxi;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (possible(bloomDay, mid, m, k))
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
int main(){
    vector<int> bloomDay;
    for(int i = 0 ; i < bloomDay.size() ; i++)
        cin >> bloomDay[i] ;
    int m ; 
    cin >> m;
    int k ;
    cin >> k;
    cout << minDays(bloomDay , m , k) << endl;
    
    return 0;
}
