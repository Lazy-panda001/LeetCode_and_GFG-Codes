class Solution {
public:
    int countOrders(int n) 
    {
        long res = 1;
        long mod = 1000000007;
        
        for(int i=1; i<=n; i++)
        {
            // first find factoria;
            res = (res * i) % mod;
            
            res = res * (2*i-1);
            
            res = res % mod;
        }
        
        return res % mod;
        
    }
};