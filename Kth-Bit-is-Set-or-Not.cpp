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
