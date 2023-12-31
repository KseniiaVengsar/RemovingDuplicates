// RemovingDuplicates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <vector>
#include <functional>  // Для std::greater

int main() {

    setlocale(LC_ALL, "RU");

    int n;
    std::cout << "Введите количество элементов: ";
    std::cin >> n;

    std::set<int, std::greater<int>> uniqueNumbers;  // greater-сортировкa в порядке убывания

    std::cout << "Введите числа: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        uniqueNumbers.insert(num);
    }

    
    std::cout << "Результат: ";
    for (int num : uniqueNumbers) {
        std::cout << num << " ";
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
