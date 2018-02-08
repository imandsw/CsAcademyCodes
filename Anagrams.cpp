
#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <array>
#include <string>
using namespace std;
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::boolalpha;

//simple fonction check_if_two_words are equivalents
bool checkAnagram(string w1, string w2){
  cout << "coucou" << '\n';
  int i=0,j=0,k,compt=0;
  bool b;
  std::cout << w1.size() << '\n';
  if (w1.size()==w2.size()){
    k=w1.size();
    while (j<k){
      b = false;
      while(i<k){
        std::cout << w1.size() << '\n';
        if (w1[j]==w2[i])
          b = true;
        i++;
      }
      if (b=true){
        compt++;
        std::cout << w1.size() << '\n';
        j++;
      }
      if ((compt-1)==k)
      std::cout << "gody" << '\n';
        return true;
      if ((compt-1)!=k)
      std::cout << "gody" << '\n';
        return false;
    }
  }
  else
    std::cout << "nono" << '\n';
}

int main() {
  string word1,word2;
  //getline(cin, word1);
  cin >> word1;

  cin >> word2;

  cout << word1;
  cout << word2;
  checkAnagram(word1,word2);
  return 0;
}
