class Solution {
public:
    
    int sum(int n){
        int ans = 0 ;
        while(n){
            int a = n % 10; 
            a = a * a; 
            ans+=a;
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        bool found = 0;
        for(int i = 0 ; i < 100 ; i++){
            n = sum(n);
            if(n==1){
                found = 1;
                break;
            }
        }
        if(found)return 1;
        else return 0;
    }
};

