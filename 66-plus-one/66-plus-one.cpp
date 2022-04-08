class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int l = digits.size() - 1; l >= 0; l--) {
            if (digits[l] + carry >= 10) {
                digits[l] = (digits[l] + carry) % 10;
                carry = 1;
            } else {
                digits[l] += carry;
                carry = 0;
                break;
            }
        }
        if (carry == 1) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};