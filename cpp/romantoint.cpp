#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> dict;
        dict['I'] = 1;
        dict['V'] = 5;
        dict['X'] = 10;
        dict['L'] = 50;
        dict['C'] = 100;
        dict['D'] = 500;
        dict['M'] = 1000;

        int res = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (i + 1 < s.length() && dict[s[i]] < dict[s[i + 1]]) {
                res -= dict[s[i]];
            } else {
                res += dict[s[i]];
            }
        }
        return res;
    }
};

int main() {
    string roman;
    cout << "Введите римское число: ";
    cin >> roman;

    Solution sol;
    int result = sol.romanToInt(roman);
    cout << "Число: " << result << endl;

    return 0;
}
