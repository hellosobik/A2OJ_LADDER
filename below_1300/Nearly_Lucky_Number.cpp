#include <iostream>
#include <string>
using namespace std; // try comment of trial_1 branch

int main() {
  string num;
  cin >> num;
  string res;
  int exist;
  for (int i = 0; i < num.size(); i++) {
    if (num[i] == '7' || num[i] == '4') {
      exist++;
    }
  }
  if (exist == 0) {
    cout << "NO";
    return 0;
  }

  for (int i = 0; i < num.size(); i++) {
    if (num.size() == 1) {
      cout << "NO";
      return 0;
    }

    if (num[i] != '7' && num[i] != '4') {
      for (int j = i; j < num.size(); j++) {
        if (num[j] == '7' || num[j] == '4') {
          cout << "NO";
          return 0;
        }
      }
      cout << "YES";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}
