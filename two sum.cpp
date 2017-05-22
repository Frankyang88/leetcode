class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result; 
        int i,j,k;
        for(i=0;i<=nums.size()-1;i++){
            k = target - nums[i]; 
            
            for(j=i+1;j<=nums.size()-1;j++){
                if(nums[j]==k){
                    result.insert(result.begin(),i);
                    result.insert(result.begin()+1,j);
                    return result;
                }
            }
            
        }
        
        return result;
    }
    
};
