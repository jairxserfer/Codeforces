#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {

  int number = 0, result = 0;
  cin >> number;
  if (number%5 == 0){
    result = number/5;
  } else{
    result = number/5 + 1;
  }
  cout << result<<endl;
  /* code */
  return 0;
}
