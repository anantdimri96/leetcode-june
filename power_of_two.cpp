class Solution {

public:

bool power_of_two_1(int n) {
// return (n!=0)&& ((long)n & ((long)n - 1)) == 0;
  return n>0 && !((long)n & ((long)n-1));
	}


bool power_of_two_2(int n) {
        int count = 0; 
        for(; n>0; n>>=1){
            if ( n & 1 ) {
                count++;
                if (count>1) return false;
            }
        }
        return count==1;
}



};