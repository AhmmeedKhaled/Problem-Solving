class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)return 0;
        
        if(n<0)return 0;
        int a = log2(n);
        
        int b = pow(2,a);
        
        if(b == n)return 1;
        else return 0;
        
    }
};