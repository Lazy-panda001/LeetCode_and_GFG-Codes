class Solution 
{
public:
    
    void reverse(vector<int> &nums, int low, int high)
    {
        while(low < high)
        {
            swap(nums[low++], nums[high--]);
        }
        
        return;
    }
    
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        
        k = k % n;
        
        int l = n-k;
        
        reverse(nums, 0 , l-1);
        reverse(nums, l , n-1);
        reverse(nums, 0 , n-1);
        
        return;
        
    }
};