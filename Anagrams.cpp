
#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <array>
#include <string>
#include <cmath>
using namespace std;
using std::string;
using std::cout;
using std::cin;

double sweight(string w) {
  /* So the idea is affecting a weight to a word which depends only of
  * the letters it contains. So that checkAnagram would just have to
  *compare the weight of the paramaters
  *But the real benefit is making the calculation only once for each word and
  *store the answers instead of the words, in order to find faster the largest 
  *subset of anagrams
  */
  
  //here we are assuming a word won't contain more than 9 occurences
  //of the same letter
  // if not enough, we'll just increase the base
  int base=10;
  
  double weight=0;
  int l=w.size();
  for (int i=0; i<l; i++)
  {   
    weight+=pow(base, w[i]-'a');
  }
  
  return weight;

}

//simple fonction check_if_two_words are equivalents
bool checkAnagram(string w1, string w2){
 
    // the complexity is a bit higher than the first approach but we won't
    // really need this function anymore
    return (sweight(w1)==sweight(w2));
}

int main() {
  string word1,word2;
  cin >> word1;
  cin >> word2;
  checkAnagram(word1,word2);
  if(checkAnagram)
  std::cout << "YES" << '\n';
  else
  std::cout << "NO" << '\n';
  return 0;
}
