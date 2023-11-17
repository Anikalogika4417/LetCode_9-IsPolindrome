// LetCode-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        bool in_middle = true;
        in_middle = to_string(x).size() % 2 == 1 ? true : false;/*
        if (in_middle) {
            if (to_string(x).substr(0, to_string(x).size() / 2) == reverce(to_string(x).substr(to_string(x).size() / 2 + 1, to_string(x).size()).begin(), to_string(x).substr(to_string(x).size() / 2 + 1, to_string(x).size()).end())) {
                return true;
            }
        }
        else {
            auto a1 = to_string(x).substr(0, to_string(x).size() / 2);
            auto a2 = to_string(x).substr(to_string(x).size() / 2, to_string(x).size());
            if (to_string(x).substr(0, to_string(x).size() / 2) == to_string(x).substr(to_string(x).size() / 2, to_string(x).size())) {
                return true;
            }
        }*/
        string last_side = to_string(x).substr(to_string(x).size() / 2 + in_middle, to_string(x).size());
        reverse(last_side.begin(), last_side.end());
        if (to_string(x).substr(0, to_string(x).size() / 2) == last_side) {
            return true;
        }

        return false;
    }
};

int main()
{
    Solution test;
    cout << test.isPalindrome(0);
}
