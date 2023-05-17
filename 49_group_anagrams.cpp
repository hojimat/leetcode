#include <iostream>
#include <vector>
#include <string>
#include <map>

class Solution {
public:

  std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
    // map with key = letter count, and value = vector of anagrams
    std::map<std::map<char,int>, std::vector<std::string>> mapOfGroupedStrs;
    std::vector<std::vector<std::string>> output;

    // push back every word to a vector with same letter count
    for(const auto& word : strs) {
      mapOfGroupedStrs[countLetters(word)].push_back(word);
    }

    for(const auto& groupedSet : mapOfGroupedStrs) {
      output.push_back(groupedSet.second);
    }

    return output;
  }

private:

  // function to count letters
  std::map<char,int> countLetters(std::string word) {
    std::map<char,int> letters;
    
    for(char letter : word) {
      if(letters.find(letter) == letters.end()) { // not found
        letters[letter] = 1;
      } else { // found
        letters[letter] += 1;
      }
    }

    return letters;
  }

};

int main() {
  std::vector<std::string> testInput {"eat","tea","tan","ate","nat","bat"};

  Solution mySol;
  std::vector<std::vector<std::string>> result = mySol.groupAnagrams(testInput);

  for(const auto& group : result) {
    for(const auto& word : group) {
      std::cout << word << " " ;
    }
    std::cout << "\n";
  }

  return 0;
}