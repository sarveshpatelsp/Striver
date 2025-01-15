    int maxProfit(vector<int>& prices) {
        // DP on stocks 
        int profit = 0;
        int n = prices.size();
        int mini = prices[0];
        for (int i = 0; i < n; i++) {
            int cost = prices[i] - mini;
            profit = max(profit, cost);
            mini = min(mini, prices[i]);
        }
        return profit;
    }

int main(){
  vector<int>arr;
  for(int i = 0 ; i < arr.size() ; i++)
    cin >> arr[i];
  cout << maxProfit(arr) << endl;
  return 0;
}
