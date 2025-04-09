class Solution {
public:
    string addBinary(string a, string b) {
        if(a == "0")
        {
            return b;
        }
        else if(b == "0")
        {
            return a;
        }
        string ans;
        int temp = 0;
        int sizea = a.length() - 1;
        int sizeb = b.length() - 1;
        while(sizea >= 0 || sizeb >= 0 || temp)
        {
            if(sizea >= 0)
            {
                temp += a[sizea] - '0';
                sizea--;
            }
            if(sizeb >= 0)
            {
                temp += b[sizeb] - '0';
                sizeb--;
            }
            if(temp % 2 == 0)
            {
                ans += '0';
            }
            else ans += '1';
            if(temp >= 2)
            {
                temp = 1;
            }
            else temp = 0;
        }
        reverse(begin(ans), end(ans));
        return ans;
    }
};
