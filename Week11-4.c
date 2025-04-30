//Week11-4.cpp
//1295. Find Numbers with Even Number of Digits

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int now = nums[i];
            int digits = 0;

            // 剝皮法：每次除以 10 就少一位，直到為 0 為止
            while (now > 0) {
                digits++;
                now = now / 10;
            }

            // 如果是偶數位數，就計入答案
            if (digits % 2 == 0) {
                ans++;
            }
        }

        return ans;
    }
};
