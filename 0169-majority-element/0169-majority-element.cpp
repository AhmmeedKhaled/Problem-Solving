class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int check = nums.size()/2;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        map<int,int>::iterator i;
        int ans ;
        for(i = mp.begin() ; i!=mp.end() ; i++){
            if(i->second > check){
                ans = i->first;
            }
        }
        return ans;
    }
};