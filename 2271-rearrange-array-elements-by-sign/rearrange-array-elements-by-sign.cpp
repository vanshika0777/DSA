class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> neg, pos;
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        vector<int>ans;
        int p=0, g=0;
        for(int k=0; k<n; k++){
            if(k%2==0){
                ans.push_back(pos[p++]);
            }
            else{
                ans.push_back(neg[g++]);
            }
        }
        return ans;
    }
};