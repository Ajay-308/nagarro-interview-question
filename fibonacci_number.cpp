#include <stdio.h>
using namespace std;

int nth_fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1;
    for (int i = 2; i < n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    printf("%d\n", nth_fibonacci(5));
    return 0;
}


