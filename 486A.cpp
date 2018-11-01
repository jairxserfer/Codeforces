#include <math.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  long long n, result, numberR, numberS, numberB1, numberB2;
  cin >> n;
  if(n%2 == 0){
      result = n / 2;
  } else {
      result = (n+1) /2;
      result = result * -1;
  }
  cout << result << endl;
  return 0;
}
