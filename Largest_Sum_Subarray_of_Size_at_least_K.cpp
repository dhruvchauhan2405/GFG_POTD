class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long int maxSum=0;
        long long int currSum=0;
        for(int i=0;i<k;i++){
            currSum+=a[i];
        }
        maxSum=currSum;
        long long int prevSum= currSum;
        int i=0;
        int j=k;
        while(j<n){
            currSum= currSum + a[j] -a[i];
            prevSum= max(prevSum+a[j], currSum);
            maxSum = max(maxSum, prevSum);
            i++;
            j++;
        }
        return maxSum;
    }
};