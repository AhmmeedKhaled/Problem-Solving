class Solution {
public:
    bool isUgly(int n) {
        
        if(n==0)return 0;
        while(n && n%2==0)n/=2;
        while(n && n%3==0)n/=3;
        while(n && n%5==0)n/=5;
        
        
        if(n==0|| n==1)return 1;
        else return 0;
    }
};