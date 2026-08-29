class Solution {
public:
    int trap(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        int rightmax = nums[right] , leftmax = nums[0];
        int paani = 0;

        while(left < right){

            if( leftmax < rightmax){

                left++;

                if(nums[left] > leftmax)    leftmax = nums[left];

                if(min(leftmax , rightmax) - nums[left] > 0)
                paani += min(leftmax , rightmax) - nums[left];


            }

            else{ 
                
                right--;

                if(rightmax < nums[right])  rightmax = nums[right];


                if( 0 < min(rightmax, leftmax) - nums[right] )
                paani += min(rightmax, leftmax) - nums[right];

            }
            

        }

        return paani;

    }
};
