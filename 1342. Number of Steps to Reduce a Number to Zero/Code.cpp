class Solution {
public:
    int numberOfSteps(int num) {
        // msb of odd no is 1 so n&1 will always be 1 for odd numbers  
        int cnt=0;
        while(num>0)
        {
            if(num&1) num-=1;
            else num>>=1;
               cnt++;
        }
        return cnt;
    }
};