class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int count=0;
         int i=0;
         int j=0;
         int n=nums1.size();
         int m=nums2.size();
         if((n+m)%2!=0){
             int k=(n+m+1)/2;
         while(i<nums1.size() && j<nums2.size()){
          if(nums1[i]<nums2[j]) {
              count++;
              if(count==k) return nums1[i];
              i++;
          }
          else {
              count++;
              if(count==k) return nums2[j];
              j++;
          }
        }
      while(i<nums1.size()){
          count++;
       if(count==k) return nums1[i];
              i++;
      }
       while(j<nums2.size()){
           count++;
       if(count==k) return nums2[j];
              j++;
       }
         }
        int p=(n+m)/2;
        int q=p+1;
        int sum=0;
        while(i<nums1.size() && j<nums2.size()){
          if(nums1[i]<nums2[j]) {
              count++;
              if(count==p) sum=sum  + nums1[i];
              else if(count == q) {
                sum=sum+nums1[i];
                 return (sum/2.0);
              }
              i++;
          }
          else {
              count++;
              if(count==p) sum=sum+ nums2[j];
              else if(count==q){
                  sum=sum+nums2[j];
                  return (sum/2.0);
              }
              j++;
          }
      }
      while(i<nums1.size()){
          count++;
        if(count==p) sum=sum  + nums1[i];
              else if(count == q) {
                sum=sum+nums1[i];
                 return (sum/2.0);
      }
            i++;
      }
       while(j<nums2.size()){
           count++;
          if(count==p) sum=sum+ nums2[j];
              else if(count==q){
                  sum=sum+nums2[j];
                  return (sum/2.0);
              }
              j++;
       }
       return {};
    }
};
