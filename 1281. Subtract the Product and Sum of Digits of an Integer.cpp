class Solution {
public:
    int subtractProductAndSum(int n) {
        int numProduct=1, numSum=0;
        while(n!=0)
        {
            int temp=n%10;
            numProduct=numProduct*temp;
            numSum=numSum+temp;
            n=n/10;
        }
        return(numProduct-numSum);
        
    }
};