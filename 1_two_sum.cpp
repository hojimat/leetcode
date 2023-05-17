#include <iostream>

// Include your libraries here:
#include <vector>
using std::vector;

// Define a logger
#define LOG(x) std::cout << "Result: " << x << std::endl

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
      std::vector<int> output;
      for(int i=0; i<nums.size(); i++) {
	for(int j=i+1; j<nums.size(); j++) {
	  if(nums[i] + nums[j] == target) {
	    output = {i, j};
	    return output;
	}
       }
      }
      return {-1,-1};
    }
};


int main() {
    Solution mySol; // instantiate Solution

    std::vector<int> nu {2,7,11,15};
    int ta = 18;
    
    std::vector<int> result = mySol.twoSum(nu, ta);// save the result

    LOG(result[0] << ", " << result[1]); // output the result
    return 0;
}
