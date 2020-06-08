class Solution {

public:

bool isPowerOfTwo(int n) {
// return (n!=0)&& ((long)n & ((long)n - 1)) == 0;
  return n>0 && !((long)n & ((long)n-1));
	}


};