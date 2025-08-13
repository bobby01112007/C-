#include <bits/stdc++.h>
using namespace std;


int main() {
    long long n;
    cin >> n;
    vector<long long> nums = {} ;
    
    while (n--) {
      long long a;
      cin >> a;
      nums.push_back(a);
    }
    
    long long t;
    cin >> t;
    
    for (int i = 0; i < nums.size(); i++) {
      long long result += nums[i];
    }
    
    
    while (t--) {
      long long x, y;
      cin >> x >> y;
      

    }
    return 0;
}
