    int findKthPositive(vector<int>& arr, int k) {
        for(int i = 0 ; i < arr.size() ; i++)
        {
        if(arr[i] <= k)
        k++; 
        else break;
        }
        return k;
    }
int main(){
    vector<int>arr ;
    for(int i = 0 ; i < arr.size() ; i++)
        cin >> arr[i];
    
}
