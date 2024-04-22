class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            result.push_back(sum % 2 + '0');
            carry = sum / 2;
        }

        if (carry == 1) result.push_back('1');

        reverse(result.begin(), result.end());

        return result;
    }
};