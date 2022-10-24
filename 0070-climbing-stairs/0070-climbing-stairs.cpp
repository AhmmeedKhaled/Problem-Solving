class Solution {
public:
    int climbStairs(int n) {
        if(n<4)
            return n ;
        
        else {
            int pre = 3 , preOfPre = 2 , now;
            for(int i = 4 ; i<=n ; i++){
                now = pre + preOfPre;
                preOfPre = pre;
                pre = now;
            }
            return now;
        }
    }
};