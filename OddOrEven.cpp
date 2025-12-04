// https://www.geeksforgeeks.org/problems/odd-or-even3618/1
// TC - O(1) , SC - O(1)
class Solution {
  public:
    bool isEven(int n) {
        // code here
        if(n%2 == 0){
            return true;
        }
        return false;
    }
};


// TC - O(1) , SC - O(1)

class Solution {
  public:
    bool isEven(int n) {
        // code here
    
        return ((n & 1) == 0 ? true : false);
    }
};

