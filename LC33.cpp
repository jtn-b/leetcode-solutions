class Solution {
public:
    
    int search(vector<int>& nums, int target) {
        
        //first lets find pivot
        const int N = nums.size();
        int l = 0;
        int r = N-1;
        int mid;
        int pivot = -1;
        if(nums[0] < nums[N-1])
            pivot = 0;
        else{
            while(l < r)
            {
                mid = (l+r)/2;

                if(nums[mid] >= nums[0] && nums[mid] >= nums[N-1])
                {
                    l = mid+1;
                }
                else if(nums[mid] <= nums[0] && nums[mid] <= nums[N-1])
                {
                    r = mid;
                }

            }

            pivot = (l+r)/2;
        }
        int i1 = lower_bound(nums.begin(),nums.begin()+pivot,target) - nums.begin();
        int i2 = lower_bound(nums.begin()+pivot,nums.end(),target)- nums.begin();
        
        if(i1 < pivot && nums[i1]==target)
            return i1;
        
        if(i2 < N && nums[i2]==target)
            return i2;
        
        return -1;
        
        
        
  
    }
};
