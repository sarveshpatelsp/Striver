    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return true;
        for (int i = 0; i < n-1; i++)
            if (nums[i] % 2 == nums[i + 1] % 2)
                return false;
        return true;
    }
int main(){
    vector<int>nums;
    for(int i = 0 ; i < nums.size() ; i++)
        cin >> nums[i];
    return 0;
}
