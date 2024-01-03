// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int ans=INT_MAX;
        for(int i=0;i<S.size();i++){
            int count[3]={0};
            for(int j=i;j<S.size();j++){
                count[S[j]-'0']++;
                if(count[0]>0 && count[1]>0 && count[2]>0){
                    ans= min(ans,j-i+1);
                    break;
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};