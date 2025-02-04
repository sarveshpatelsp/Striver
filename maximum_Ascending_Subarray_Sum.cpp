    int maxAscendingSum(vector<int>& nums) {
        int maxSum = nums[0];
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] < nums[i])
                sum += nums[i];
            else
                sum = nums[i];

            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
int main(){
    vector<int>nums;
    cout << maxAscendingSum(nums) << endl;
    return 0;
}
