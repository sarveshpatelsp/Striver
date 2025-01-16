int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();
        unordered_map<long long, int> mp;
        mp[0] = 1;
        int count = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int rem = sum - k;
            count += mp[rem];
            mp[sum]++;
        }
        return count;
    }
int main(){
        vector<int>nums;
        for(int i = 0 ; i < nums.size() ; i++)
                cin >> nums[i]; 
        int k;
        cin >> k;
        cout << subarraySum(nums , k) << endl;
    return 0;    
}
