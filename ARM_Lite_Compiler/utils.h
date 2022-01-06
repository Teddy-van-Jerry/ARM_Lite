#ifndef _UTILS_H_
#define _UTILS_H_

#include <algorithm> 
#include <cctype>
#include <locale>

namespace ARM_Compiler {
    // trim from start (in place)
    // reference: https://stackoverflow.com/a/217605/15080514
    static inline void ltrim(std::string& s) {
        s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
            return !std::isspace(ch);
        }));
    }

    // trim from end (in place) and remove comments
    static inline void rtrim(std::string& s) {
        s = s.substr(0, s.find_first_of(';')); // remove comments starting with ';'
        s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
            return !std::isspace(ch);
        }).base(), s.end());
    }

    // trim from both ends
    static inline std::string trim(const std::string& s) {
        std::string ret = s;
        ltrim(ret);
        rtrim(ret);
        return ret;
    }

    static std::string toLower(const std::string& s) {
        std::string ret(s.length(), ' ');
        for (auto i = ret.begin(); i != ret.end(); i++) {
            *i = std::tolower(s[i - ret.begin()]);
        }
        return ret;
    }

    static std::string toUpper(const std::string& s) {
        std::string ret(s.length(), ' ');
        for (auto i = ret.begin(); i != ret.end(); i++) {
            *i = std::toupper(s[i - ret.begin()]);
        }
        return ret;
    }

    static std::string num2str(int number, int digits) {
        std::string s(digits, '0');
        if (number < 0) number = ~number + 1; // take the compliment
        std::string numStr = std::to_string(number);
        int length = std::min(digits, (int)numStr.length());
        for (int i = 0; i != length; i++) {
            s[digits - i - 1] = numStr[i];
        }
        return s;
    }
}

#endif
