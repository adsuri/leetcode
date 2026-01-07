// Leetcode #12: Integer to Roman - Medium

#include <string>

class Solution {
 public:
    std::string intToRoman(int num) {
        std::string roman;

        if (num > 999) {
            int subtractions = num / 1000;
            for (int i = 0; i < subtractions; ++i) {
                roman += "M";
            }
            num -= subtractions * 1000;
        }

        if (num > 99) {
            int subtractions = num / 100;
            if (subtractions == 9) {
                roman += "CM";
            } else if (subtractions >= 5 && subtractions < 9) {
                roman += "D";
                for (int i = 5; i < subtractions; ++i) {
                    roman += "C";
                }
            } else if (subtractions == 4) {
                roman += "CD";
            } else if (subtractions >= 1 && subtractions < 4) {
                for (int i = 0; i < subtractions; ++i) {
                    roman += "C";
                }
            }
            num -= subtractions * 100;
        }

        if (num > 9) {
            int subtractions = num / 10;
            if (subtractions == 9) {
                roman += "XC";
            } else if (subtractions >= 5 && subtractions < 9) {
                roman += "L";
                for (int i = 5; i < subtractions; ++i) {
                    roman += "X";
                }
            } else if (subtractions == 4) {
                roman += "XL";
            } else if (subtractions >= 1 && subtractions < 4) {
                for (int i = 0; i < subtractions; ++i) {
                    roman += "X";
                }
            }
            num -= subtractions * 10;
        }

        if (num == 9) {
            roman += "IX";
        } else if (num >= 5 && num < 9) {
            roman += "V";
            for (int i = 5; i < num; ++i) {
                roman += "I";
            }
        } else if (num == 4) {
            roman += "IV";
        } else if (num >= 1 && num < 4) {
            for (int i = 0; i < num; ++i) {
                roman += "I";
            }
        }

        return roman;
    }
};