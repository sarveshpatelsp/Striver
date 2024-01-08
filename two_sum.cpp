 vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0 ; 
        int n = nums.size(); 
        vector<int>ans; 
        for (int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                sum = nums[i] + nums[j]; 
                if(target == sum){
                 ans.push_back(i); 
                 ans.push_back(j); 
                 break; 
                }
            }
        }
        return ans; 
    }
