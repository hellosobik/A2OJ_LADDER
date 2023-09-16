#include <iostream>
using namespace std;
int main() {
  int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
  int num1, num2;
  cin >> num1 >> num2;
  int yes;
  for (int i = 0; i < 15; i++) {
    if (num1 == prime[i] && num2 == prime[i + 1]) {
      yes++;
    }
  }
  if (yes > 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
