class Solution {
public:
    bool halvesAreAlike(string s) {
        char comp[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int av = 0;
        int bv = 0;
        int n = s.size();
        string a = "";
        string b = "";
        
        for (int i = 0; i < n / 2; i++) {
            a += s[i];
        }
        for (int i = n / 2; i < n; i++) {  // Fix: start from n/2 instead of (n/2)+1
            b += s[i];
        }
        for (int j = 0; j < a.size(); j++) {
            for (int i = 0; i < 10; i++) {
                if (a[j] == comp[i]) {
                    av++;
                }
            }
        }
        for (int j = 0; j < b.size(); j++) {
            for (int i = 0; i < 10; i++) {
                if (b[j] == comp[i]) {
                    bv++;
                }
            }
        }
        return av == bv;
    }
};
