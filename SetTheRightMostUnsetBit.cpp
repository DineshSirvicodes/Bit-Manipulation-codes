// TC - O(log n) , SC - O(log n)

class Solution {
  public:
    int setBit(int n) {
        // Write Your Code here
        string bits = "";
        while(n>0){
            int res = n%2;
            if(res == 1){
                bits+='1';
            }else{
                bits+='0';
            }
            n/=2;
        }
        reverse(bits.begin(),bits.end());
        
        if(bits.find('0') == string::npos){
            bits = "0" + bits;
        }
        
        for(int i = bits.size()-1; i>=0 ;i--){
          
            if(bits[i] == '0'){
                bits[i] = '1';
                break;
            }
        }
        int sum = 0;
        int index = 0;
        for(int i = bits.size()-1; i>=0 ;i--){
            sum += (bits[i]-'0')* pow(2,index);
            index++;
        }
        return sum;
    }
};

// TC- O(1) , SC - O(1)
class Solution {
  public:
    int setBit(int n) {
        // Write Your Code here
        n = n | (n+1);
        return n;
    }
};


