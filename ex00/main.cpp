#include "whatever.hpp"

int main(){


    int a = 42;
    int b = 80;
    std::cout << "a = " << a << ", b = " << b << "\n";

    std::cout << "after swap(a, b):\n";
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << "\n";
    std::cout << "min(a, b) = " << ::min(a, b) << "\n";
    std::cout << "max(a, b) = " << ::max(a, b) << "\n\n";

    int sameB = 42;
    std::cout << "b = " << b << ", sameB = " << sameB << "\n";
    std::cout << "b's address: " << &b << "\n";
    std::cout << "sameB's address: " << &sameB << "\n";
    std::cout << "min(b, sameB) = " << ::min(b, sameB) << " | min result's address: " << &::min(b, sameB) << "\n";
    std::cout << "max(b, sameB) = " << ::max(b, sameB) << " | max result's address: " << &::max(b, sameB) << "\n\n\n\n";



    std::string str1 = "COOL str";
    std::string str2 = "WHAT str";
    std::cout << "str1 = " << str1 << ", str2 = " << str2 << "\n";

    std::cout << "after swap(str1, str2):\n";
    ::swap(str1, str2);
    std::cout << "str1 = " << str1 << ", str2 = " << str2 << "\n";
    std::cout << "min(str1, str2) = " << ::min(str1, str2) << "\n";
    std::cout << "max(str1, str2) = " << ::max(str1, str2) << "\n\n";

    std::string sameStr2 = "COOL str";
    std::cout << "str2 = " << str2 << ", sameStr2 = " << sameStr2 << "\n";
    std::cout << "str2's address: " << &str2 << "\n";
    std::cout << "sameStr2's address: " << &sameStr2 << "\n";
    std::cout << "min(sameStr2, str2) = " << ::min(sameStr2, str2) << " | min result's address: " << &::min(sameStr2, str2) << "\n";
    std::cout << "max(sameStr2, str2) = " << ::max(sameStr2, str2) << " | max result's address: " << &::max(sameStr2, str2) << "\n";

    return (0);
}
