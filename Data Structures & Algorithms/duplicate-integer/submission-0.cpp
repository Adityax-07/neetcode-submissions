class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>mp(n);
       
        for(int i = 0; i<n; i++){
              mp[nums[i]]++;
        }
        bool flag = false;
        for( auto& x : mp){
            if( x.second > 1){
                flag = true;
            }
        }

        if( flag == true) return true;
        else return false;
    }
};