#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Таблиця істинності для (p⨁q)^(p⨁r)(f(n))\n\n";
    std::cout << "| p | q | r | f(n) |\n";
    std::cout << "|---|---|---|------|\n";

    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            for (int r = 0; r <= 1; r++) {
                bool fn = (p != q) && (p != r);
                std::cout << "| " << p << " | " << q << " | " << r << " |  " << fn << "  |\n";
            }
        }
    }

    return 0;
}
