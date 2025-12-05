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


