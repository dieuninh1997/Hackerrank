#include <sstream>
#include <vector>
#include<cstdlib>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
  vector<int> v;
  stringstream ss(str); // Turn the string into a stream.
  string tok;

  while(getline(ss, tok, ',')) {
	v.push_back(atoi(tok.c_str()));
  }
  return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
