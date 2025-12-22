class Solution {
  public:
    string Num2Bin(int n){
        string temp = "";
        while(n!=0){
            if(n%2 == 0){
                temp+='0';
            }
            else temp+='1';
            n/=2;
        }
        reverse(temp.begin(),temp.end());
        
    }
    
    bool checkKthBit(int n, int k) {
       
        string res = Num2Bin(n);
        if(k>res.length()){
            return false;
        }
        return res[res.length()-k-1] == '1';
    }
};

// TC - O(logn),due to integer-to-binary conversion and indexing. , SC - O(logn) due to binary string |`

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        bool flag = false;
        int index = 0;
        int res = 0;
        while(n > 0){
                res = n%2;
                if(res == 1 && index == k){
                    flag = true;
                    break;
                }
            
            n /=2;
            index++;
        }
        return flag;
    }
};



// Tc - O(1) , SC - O(1)

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
      // Check if the i-th bit is set using bitwise AND operation
        int leftShift = 1 << k;
       // If the i-th bit is 1, the result will be non-zero
        return (n & leftShift) != 0;
    }
};

// using right shift operator
class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        if((n>>k) & 1 != 0) {
            return true;
        }return false;
    }
};
