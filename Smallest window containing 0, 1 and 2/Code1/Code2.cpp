// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int ans=INT_MAX;
        int count[3]={0};
        int i=0;
        for(int j=0;j<S.size();j++){
            count[S[j]-'0']++;
            if(count[0]>0 && count[1]>0 && count[2]>0){
                
                while(count[S[i]-'0']>1){
                    count[S[i]-'0']--;
                    i++;
                }
                ans=min(ans,j-i+1);
            }
            
            
        }
        return ans==INT_MAX?-1:ans;
    }
};