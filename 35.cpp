class Solution {
public:
    int searchInsert(vector<int>& nums, int key) {
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
      if(nums[i]==key)
      return i;
    }
    for(int i=0;i<n-1;i++){
      if(nums[i]<key && nums[i+1]>key)
      return i+1;
    }
    if(nums[0]>key){
    printf("aa");
    return 0;
    }
    return n;
    }
};