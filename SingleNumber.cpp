class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> maching_nums;
        int position = 0;
        for (int i = 0; i < nums.size(); i++){
            bool flag = false;
            for (int j = 0; j < maching_nums.size(); j++){
                if(nums[i] == maching_nums[j]){
                    flag = true;
                    position = j;
                }
            }
            if (flag){
                maching_nums.erase(maching_nums.begin() + position);
            }
            else{
                maching_nums.push_back(nums[i]);
            }   
        }

        return maching_nums[0];
    }
};
