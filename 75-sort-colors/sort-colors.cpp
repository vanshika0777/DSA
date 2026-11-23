class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0; int mid=0; int high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low++], nums[mid++]);              
            }
            else if(nums[mid]==2){
                swap(nums[mid], nums[high--]);
            }
            else{
                mid++;
            }
        }
    }
};
//i=0 to n-2
// min=i
// j=i+1 to n-1
// a[j]<a[min]
// min=j
//swap(a[i], a[min])