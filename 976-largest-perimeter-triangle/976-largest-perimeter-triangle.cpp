class Solution {
public:
    int largestPerimeter(vector<int>& nums) 
    {
        int max_perimeter = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        
        
        for(int i=0; i<n-2;i++)
        {
            if(nums[i] < nums[i+1] + nums[i+2])
            {
                max_perimeter = max(max_perimeter , nums[i]+nums[i+1]+nums[i+2]);
                break;
            }
        }
        
        return max_perimeter;
        
    }
};