#include <iostream>

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        num % i == 0 ? sum += i : num;
    }
    return sum == num;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << std::boolalpha << isPerfect(num);
}
