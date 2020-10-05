class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int curr_sum = 0;
    
        int count = 0;
        int start = 1;
        
        for(int i=1; start<=n ;){
            
            if(curr_sum == n){
                count++;
                
                curr_sum -= start;
                start++;
                
            }
            else if(curr_sum < n){
                curr_sum += i;
                i++;
                continue;
            }
            else{
                
                
                curr_sum -= start;
                start++;
            }
        }
        return count;
    }
    
};
