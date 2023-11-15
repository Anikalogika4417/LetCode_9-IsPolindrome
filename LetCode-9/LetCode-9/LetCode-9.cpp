// LetCode-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        bool in_middle = true;
        in_middle = to_string(x).size() % 2 == 1 ? true : false;
        if (in_middle) {
            if (to_string(x).substr(0, to_string(x).size() / 2 -1) == to_string(x).substr(to_string(x).size() / 2 + 1, to_string(x).size()).reserve()) {
                return true;
            }
        }
        else {
            if (to_string(x).substr(0, to_string(x).size() / 2 - 1) == to_string(x).substr(to_string(x).size() / 2, to_string(x).size())) {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution test;
    cout << test.isPalindrome(131);
}
