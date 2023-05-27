#include <iostream>
#include <vector>
#include <map>

#define PRINTMAP(x) for(const auto& [k,v] : x) {std::cout << k << " " << v << " \n";}
#define PRINTVECTOR(x) for(const auto& i : x) {std::cout << i << " \n";}

class Solution {
public:
    std::vector<int> topKFrequent(const std::vector<int>& nums, int k) {

        std::vector<int> output {};

        // Count elements:
        std::map<int,int> counted;
        counted = countElements(nums);
        
        // Reverse {value:count} to {count:value}
        std::map<int, std::vector<int>> reversed;
        for(const auto& [k,v] : counted) {
            reversed[v].push_back(k); 
        }
       
        int count = 0;
        for(auto it = reversed.rbegin() ; it != reversed.rend() && count < k; it++) {
            for(const auto& num : it->second) {
                output.push_back(num);
                count++;
            }
        }

        return output;
    }

private:
    std::map<int, int> countElements(const std::vector<int>& numbers) {
        // A function that counts vector elements
        std::map<int, int> output;

        for(const int& num : numbers) {
            if(output.find(num) == output.end()) {// if not found, set to 1
                output[num] = 1;
            }else { // if found increment by 1
                output[num] += 1;
            }
        }

        return output;
    }
};


int main() {
    Solution mySol;
    std::vector<int> myNums {1,2};
    int myK {2};

    std::vector<int> myRes = mySol.topKFrequent(myNums, myK);
    PRINTVECTOR(myRes)

    return 0;
}
