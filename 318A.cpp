#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
//#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
#define  ll long long
#define MAX 100001

using namespace std;

ll solution(ll n , ll k) {
  /* code */
  ll number;
  if ( k <= (n+1) / 2 )
  {
    number = k * 2 - 1;
    return number;
  }
  else
  {
    number = (k-(n+1)/2)*2;
    return number;
  }
/*
  ll count = 0, buffer;
  buffer = k;

  if( k > n)
  {
    return 0;
  }

  for(ll i = 1; i <= n ; i = i + 2){
    cout << i<< endl;
    count++;
    if (count == buffer) {
      return i;
    }
  }

  for(ll i = 2; i <= n ; i = i + 2){
    cout << i<< endl;
    count++;
    if (count == buffer) {
      return i;
    }
  }
  */

  //for (size_t i = 1; i <= k; i++) {
    /* code */
    //cout << i << endl;
  //  count++;
  //  if(count == buffer){
    //  return 10;
  //  }

    //  cout << count << endl;

  //}
  //for (size_t i = 0; i <= k; i=i+2) {
    /* code */
    //  cout << i << endl;
      //count++;
    //  if(count == buffer){
      //  return 15;
    //  }

  //    cout << count << endl;

//  }

return 0;
}

int main(int argc, char const *argv[]) {
  /* code */
  ll n, k, number;
  cin >> n >> k;
  number = solution(n,k);
  cout << number << endl;

  return 0;
}
