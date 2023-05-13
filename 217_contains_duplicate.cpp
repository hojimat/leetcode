#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

#define LOG(x) std::cout << x << std::endl

using std::vector;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> passed;
        for(int num: nums) {
            if (passed.find(num) != passed.end()) {
                return true;
            }
            passed.insert(num);

        }
        return false;
    }
};


int main() {
    Solution mySol;

    vector<int> myVec {1,2,3,0};

    bool result = mySol.containsDuplicate(myVec);

    std::cout << result; 
    return 0;
}
