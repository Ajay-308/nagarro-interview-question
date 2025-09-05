#include <iostream>
using namespace std;
// # agar n and n-1 ka bitwise And 0 ho to n power of 2 hai

// # for And (&)
// # all 1 -> 1
// # any 0-> 0

bool power_of_two(int n) {
    if (n < 0) return false;
    if (n == 0) return true; 
    return (n & (n - 1)) == 0;
}

bool powOftWo(int n) {
    if (n < 0) return false;
    while (n % 2 == 0 && n != 0) {
        n /= 2;
    }
    return n == 1;
}

int main() {
    cout << boolalpha;
    cout << "power_of_two(15) -> " << power_of_two(15) << endl;
    cout << "powOftWo(1024) -> " << powOftWo(1024) << endl;
    return 0;
}


// # dusra method 
// # hum log n ka % 2 se divide karnege and dekhnege ki ==0 hota hai ki nhi 
// # agar ho gya to n/=2 kar denge half karne ke liye or same process to chalenge tab tak jab tak n%2==0 aa raha hai 
// # end mai hum n ==1 hai ki nhi check kar lenge

