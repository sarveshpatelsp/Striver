int findKRotation(vector<int> &arr) {
        int ans = 0;
        int low = 0 , high = arr.size() - 1;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(arr[0] <= arr[mid])
            {
                low = mid + 1;
            }
            else 
            {
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
int main(){
        vector<int>arr;
        for(int i = 0 ; i < arr.size() ; i++)
                cin >> arr[i]; 
        cout << findKRotation(arr) << endl;
 return 0;
}
