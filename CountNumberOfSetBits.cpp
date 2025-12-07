class Solution {
  public:
    int setBits(int n) {
        int cnt = 0;
        string str = "";
        while(n>0){
            int res = n%2;
            if(res == 1){
                str+='1';
                cnt++;
            }else{
                str+='0';
            }
            n/=2;
        }
        return cnt;
    }
};



class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int cnt = 0;
        while(n>0){
            if(n&1){ // checks last bit is set or not
                cnt++;
            }
            n=n>>1;
        }
        return cnt;
    }
};


// Brian Kernighan’s Algorithm
//Each time you do n = n & (n - 1), you remove ONE 1 from n.

class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int cnt = 0;
        while(n>0){
            n = n & (n-1);
            cnt++;
        }
        return cnt;
    }
};
