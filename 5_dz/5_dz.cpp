#include <iostream>

int main() {
    int a;
    std::cin >> a;
    int temp = a, q = 0;
    while (temp > 0) {
        if (temp % 10 == 0)
            q++;
        temp /= 10;
    }
    while (q != 0) {
        a = a / 10;
        q--;
    }
    if (a < 99) {
        if (a % 4 == 0) std::cout << "ves";
        else std::cout << "neves";
    }
    else if (a < 999) {
        if (a % 4 == 0) std::cout << "ves";
        else std::cout << "neves";
    }
    else if (a <= 3000) {
        if (a % 4 == 0) std::cout << "ves";
        else std::cout << "neves";
    }
    return 0;
}