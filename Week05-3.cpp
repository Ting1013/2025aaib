///Week05-3.cpp
///LeetCode 2206. Divide Array Into Equal Pairs

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501] = {};//
        int odd = 0;
        for(int i=0; i<nums.size();i++){
            int now = nums[i];
            a[now]++;
            if(a[now] % 2 == 0) odd--;
            else odd++;
        }
        if(odd==0)return true;
        else return false;

    }
};
