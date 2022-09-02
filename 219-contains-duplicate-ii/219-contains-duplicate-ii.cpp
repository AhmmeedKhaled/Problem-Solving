class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        map<int,vector<int>>mp;
        for(int i = 0; i < nums.size() ; i++){
            mp[nums[i]].push_back(i);
        }
        map<int,vector<int>>::iterator i;
        bool found = 0 ;
        for(i = mp.begin() ; i!=mp.end();i++){
            
            for(int j = 0 ; j < (i->second).size()-1 ;j++){
                
                int now = abs(((i->second)[j] - (i->second)[j+1]));
                if(now <= k){
                    found = 1 ;
                    break;
                }
            }
            if(found)break;
        }
        
        if(found)
            return 1;
        else 
            return 0;
    }
};