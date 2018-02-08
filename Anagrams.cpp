
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
bool checkAnagram(string w1, string w2){
  int i=0,j=0,k,compt=0;
  int test=0;
  if (w1.size()==w2.size()){
    k=w1.size();
    while (j<k){
      test =0;
      while(i<k){
        if (w1[j]==w2[i])
          test=1;
        i++;
      }
      if (test==1){
        compt++; //incremented when at least aletter from w1 is found in w2
        j++;
      }
      if (test==0)
        break;
     i=0;
    }
  if (compt==k) {
    return true;
  }
  else
  return false;
  }
  else
  return false;
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
