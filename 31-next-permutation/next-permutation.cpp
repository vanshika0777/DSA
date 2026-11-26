class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n=nums.size();
       int gola=-1;
       for(int i=n-1; i>0; i--){
        if(nums[i-1]<nums[i]){
            gola=i-1;
            break;
        }
       }
       if(gola!=-1){
        int swapped=gola;
        for(int j=n-1; j>=gola; j--){
            if(nums[j]>nums[gola]){
                swapped=j;
                break;
            }
        }
        swap(nums[gola], nums[swapped]);
       }
        reverse(nums.begin()+gola+1, nums.end());

    }
};