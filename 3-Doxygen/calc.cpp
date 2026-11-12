#include <iostream>

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double multiply(double a, double b) {
        return a * b;
    }
};

int main() {
    Calculator calc;
    std::cout << calc.add(10.0, 5.0) << "\n";
    return 0;
}