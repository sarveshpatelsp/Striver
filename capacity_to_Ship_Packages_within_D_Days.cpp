    int f(vector<int>& weights, int cap) {
        int days = 1, load = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (weights[i] + load > cap) {
                days += 1;
                load = weights[i];
            } else
                load += weights[i];
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = *max_element(weights.begin(), weights.end());
        int totalSum = accumulate(weights.begin(), weights.end(), 0);
        int low = maxi , high = totalSum;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(f(weights , mid) <= days)
            high = mid - 1;
            else low = mid + 1 ;
        }
        return low;
    }
int main(){
    vector<int> weights;
    for(int i = 0 ; i < weights.size() ; i++)
        cin >> weights[i] ;
    int days;
    cin >> days;
    cout << shipWithinDays(weights , days) << endl;
}
