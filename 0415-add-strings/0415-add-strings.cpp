class Solution {
public:
string solve(string& num1 , string& num2 , int i , int j , int carry){
    if( i < 0 && j < 0 && carry == 0){
        return "";
    }
    int digit1 = 0;
    int digit2 = 0;

    if( i >= 0){
        digit1 = num1[i] - '0';
    }
    if( j >= 0){
        digit2 = num2[j] - '0';
    }
    int sum = digit1 + digit2 + carry;
    int digit = sum % 10;
    int newCarry = sum / 10;

    string ans = solve(num1 , num2 , i - 1 , j - 1 , newCarry);
    ans += char(digit + '0');
    return ans;
}

    string addStrings(string num1, string num2) {
        
        int i = num1.size() - 1;
        int j = num2.size() - 1;

        return solve( num1 , num2 , i , j , 0);
    }
};