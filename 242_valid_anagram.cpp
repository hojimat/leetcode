#include <iostream>

// Include your libraries here:
#include <string>
#include <algorithm>
using std::string;

// Define a logger
#define LOG(x) std::cout << "Result: " << x << std::endl

class Solution {
public:
  bool isAnagram(string s, string t) {
    
    // not anagram if not the same length
    if(s.length() != t.length()) {
      return false;
    }

    // sort both strings
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());

    if(s == t) {
      return true;
    }
    
    return false;
  }  
};


int main() {
    Solution mySol; // instantiate Solution

    std::string ss, tt;
    ss = "anagram";
    tt = "nagaran";
    
    bool result = mySol.isAnagram(ss, tt); // save the result

    LOG(result); // output the result
    return 0;
}
