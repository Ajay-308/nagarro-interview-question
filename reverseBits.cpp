#include <iostream>
using namespace std;


class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0; // int can be 32 bit and 64 bit but this guarnetees 32 bits
        
        for (int i = 0; i < 32; i++) {
            int bit = (n >> i) & 1;            // extract i-th bit
            result = (result << 1) | bit;      // shift result left, append bit
        }
        
        return result;
    }
};
// time complexity : 0(1) as loop run fixed 32 times
// space complexity : O(1) no extra space used

// ✅ Example dry run:
// If n = 13 (0b00000000000000000000000000001101)

// Iter 0: bit = 1 → result = 1

// Iter 1: bit = 0 → result = 10 (binary)

// Iter 2: bit = 1 → result = 101 (binary)

// Iter 3: bit = 1 → result = 1011 (binary)

// Rest bits → 0’s → final = 10110000000000000000000000000000