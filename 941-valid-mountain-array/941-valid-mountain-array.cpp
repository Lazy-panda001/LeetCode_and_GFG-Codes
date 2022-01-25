class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        if(arr.size() <3)
        {
            return false;
        }
        
        int n = arr.size();
        
        for(int i=0; i<n-1; i++)
        {
            if(arr[i] == arr[i+1])
            {
                return false;
            }
        }
        
        int max_value_index = 0;
        
        int max_value=INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(arr[i] > max_value)
            {
                max_value = arr[i];
                max_value_index = i;
            }
        }
        
      //  cout<<max_value_index<<" ";
        if(max_value_index == n-1 or max_value_index == 0)
        {
            return false;
        }
        
        for(int i=0; i<max_value_index; i++)
        {
            if(arr[i] > arr[max_value_index] or arr[i] > arr[i+1])
            {
                return false;
            }
        }
        
        for(int i=max_value_index+1; i<n-1; i++)
        {
            if(arr[i] > arr[max_value_index] or arr[i] < arr[i+1])
            {
                return false;
            }
        }
        
        return true;
          
    }
};