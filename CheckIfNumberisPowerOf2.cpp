class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i = 0 ; i<=30;i++)
        {
            int ans = pow(2,i);
            if(ans==n)
            {
                return true;
            }
        }return false;
        
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        string str = "";
        while(n>0){
            int res = n%2;
            if(res == 0){
                str+='0';
            }else{ str+='1';
            }
            n/=2;
        }
        int cnt = 0;
        for(int i = 0; i<str.size(); i++){
            if(str[i] == '1'){
                cnt++;
            }
        }
        if(cnt == 1) return true;
        else{
            return false;
        }
    }
};

// TC - O(1) , Sc - O(1)

class Solution {
public:
    bool isPowerOfTwo(int n) {
      // When we do AND of 8 and 7 the end result is 0 ie the number 8 is a power of 2.
        return n > 0 && ((n & (n-1) )== 0);
    }
};
