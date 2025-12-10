// TC - O(1), SC - O(1)
class Solution {
  public:
    pair<int, int> get(int a, int b) {

        //XOR a and b, store in a
        a = a ^ b; // mixed a ^ b  , xor of same will be 0 , and x ^ 0 = x
        
        //XOR new a with b, result is original a → store in b
        b = a ^ b; // result of b is a (stored earlier)
        
        //XOR new a with new b, result is original b → store in a
        a = a ^ b; // result of a is b (stored earlier)
        
        return {a,b};
    }
};
