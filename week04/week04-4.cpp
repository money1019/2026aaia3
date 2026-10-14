//week04-4.cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N= digits.size();
        int carry = 1; //因為最右邊要+1
        for(int i=N-1;i>=0;i--){
            int now = digits[i]+carry;
            carry = now/10;
            digits[i]=now%10;
       // digits[i]+=carry;
       // if(digits[i]>9) carry=1;
        //  carry = 1;
        //  digits[i] = digits[i]%10;
       // }else carry=0;
        }
        if(carry>0) digits.insert(digits.begin(),carry);
        return digits;
    }
};
