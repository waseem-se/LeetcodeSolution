//
// Created by waseem on 10/19/25.
//

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, mid ;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;

    }
};

int main() {
    Solution s;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int target = 5;

    cout << "Answer: "<< s.search(v, target)<<endl;
    return 0;
}