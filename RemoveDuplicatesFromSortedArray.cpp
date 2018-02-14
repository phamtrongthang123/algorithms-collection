/*
 Thay vì cứ gặp trùng là lại xếp lại mảng, thì mình dùng 2 lính canh, mỗi lầtrôi qua thì chỉ coi cai nào khác thì add vô thôi. 
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int count=1;
        int curr=nums[0];
        for(int i=1;i<nums.size();++i)
            if(curr != nums[i])
            {
                nums[count++] = nums[i];
                curr = nums[i];
            }
        return count;
    }
};
