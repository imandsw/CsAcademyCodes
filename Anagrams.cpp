
#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <array>
#include <string>
using namespace std;
using std::string;
using std::cout;
using std::cin;

//simple fonction check_if_two_words are equivalents
int checkAnagram(string w1, string w2){
  int i=0,j=0,k,compt=0;
  int test=0;
  if (w1.size()==w2.size()){
    //cout << compt ;
    //std::cout << "here" << '\n';
    k=w1.size();
    while (j<k){
      test =0;
      while(i<k){
        if (w1[j]==w2[i])
          {test=1;
          std::cout << i << '\n';}
        i++;
      }
      if (test==1){
        compt++; //incremented when at least aletter from w1 is found in w2
        std::cout << compt << '\n';
        j++;
      }
      if (test==0)
        break;
     i=0;
    }
  std::cout << "out of big loop" << '\n';
  if (compt==k) {
    std::cout << "equivalent" << '\n';
  }
  else
  std::cout << "notequivalent" << '\n';
  }
  else
  std::cout << "notequivalent" << '\n';
}

int main() {
  string word1,word2;
  cin >> word1;
  cin >> word2;
  //cout << word1 << "\n";
  //cout << word2 << "\n";
  checkAnagram(word1,word2);
  return 0;
}
