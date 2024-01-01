class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
       if(nums.size()%2==1){
           return false;
       }
       
       unordered_map<int,int> map;
       for(int i=0;i<nums.size();i++){
           map[nums[i]%k]++;
       }
       if(map[0]%2==1){
           return false;
       }
       for(int i=1;i<k;i++){
           if(map[i] != map[(k-i)]){
               return false;
           }
       }
       return true;
    }
};