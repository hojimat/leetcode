#include <iostream>
#include <vector>
#include <memory>

using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> candidates;
        for(auto& i : nums) {
            if(i>target) {
                continue;
            }else {

            }
        }
        return {0,1};
    }
};


int main() {
    vector<int> myNums = {2,7,11,5};
    int myTarget = 9;

    std::unique_ptr<Solution> mySolution = std::make_unique<Solution>();


    vector<int> myAnswer = mySolution->twoSum(myNums, myTarget);
    
    for(auto& i : myAnswer) {
        std::cout << i << ", ";
    }

    return 0;
}
