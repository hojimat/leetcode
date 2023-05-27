#include <iostream>
#include <vector>
#include <map>


class Solution {
public:
    
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
      return {1,2,3};
    }
};

int main() {
  Solution mySol;
  std::vector<int> myNums;
  int myK;

  std::vector<int> result;
  result = mySol.topKFrequent(myNums, myK);

  for(auto& i : result) {
    std:: cout << i << " " ;
  }


  return 0;
}