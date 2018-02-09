
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <array>
#include <string>
using namespace std;
using std::string;
using std::cout;
using std::cin;
//simple fonction check_if_two number of words are anagrams
bool checkAnagram(vector<string> v, int VectorSize){
  int i=0,j=0,k,compt=0;
  int test=0;
  //vector<string>::iterator i=vec.begin();
  //std::cout << (*i) << '\n';
  //vector <int> :: iterator i;
  //std::cout << v[1] << '\n';
  //int length = (*it).length();
  //for (it = v.begin(); it != v.end(); ++it)
  //       cout << length << '\n';
  //std::cout << v[0].size() << '\n';
  //std::cout << v[0].size() << '\n';
  //for ( i = 0; i < VectorSize; i++) {
  //  std::cout << v[i].size() << '\n';
  //}
  if (v[0].size()==v[1].size()){
    k=v[0].size();
    while (j<k){
      test =0;
      while(i<k){
        if (v[0][j]==v[1][i])
          test=1;
        i++;
      }
      if (test==1){
        compt++; //incremented when at least aletter from w1 is found in w2
        j++;
      }
      if (test==0)
        break; // a letter not common means thy r not anagrams
     i=0;
    }
  if (compt==k) {
    return true;
    std::cout << "cucu" << '\n'; // compt is exactly same as size means every letter is shown at least once in other string
  }
  else
  return false;
  }
  else
  return false; // if the two strings are not same size no need to checkAnagram
}

int main() {
  int N;
  vector <string> words;
  string s;
  cin >> N;
  for (size_t i = 0; i < N; i++){
    cin >> s;
    words.push_back(s);
  }
  //std::cout << words[0] << '\n';
  //std::cout << words[1] << '\n';
  if(checkAnagram(words,N))
  std::cout << "YES" << '\n';
  else
  std::cout << "NO" << '\n';
  return 0;
}
