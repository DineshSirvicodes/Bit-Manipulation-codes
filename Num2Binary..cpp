string convertDecimal2Binary(int n){
    string res = "";
        while(n!=0){
            if(n%2 == 0){
                res+='0';
            }
            else res+='1';
            n/=2;
        }
    reverse(res.begin(),res.end());
    return res;
}
