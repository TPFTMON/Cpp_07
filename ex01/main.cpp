#include "iter.hpp"

template <typename T>
void printElement(const T &element){

    std::cout << element << " ";
}

void multiplyByTwo(int &n){

    n *= 2;
}

char toLower(char &c){

    c = std::tolower(c);
    return (c);
}

int main(){

    int lenght = 5;
    int intArray[] = {1, 2, 3, 4, 5};

    std::cout << "intArray: ";
    ::iter(intArray, lenght, printElement<int>);
    std::cout << "\n";

    ::iter(intArray, lenght, multiplyByTwo);
    std::cout << "intArray: ";
    ::iter(intArray, lenght, printElement<int>);
    std::cout << "\n\n";



    char charArray[] = {'H', 'E', 'L', 'L', 'O'};

    std::cout << "charArray: ";
    ::iter(charArray, lenght, printElement<char>);
    ::iter(charArray, lenght, toLower);
    std::cout << "\ncharArray: ";
    ::iter(charArray, lenght, printElement<char>);
    std::cout << "\n";



    const std::string strArray[] = {"COOL STRING", "dIfIcUlT sTrInG", "serious string.", "miaou", "<I'm very creative>"};

    std::cout << "\nconst strArray: ";
    ::iter(strArray, lenght, printElement<std::string>);
    std::cout << "\n";

    return (0);
}

// int main(){
//
    // int intArray[] = {1, 2, 3, 4, 5};
    // std::cout << "intArray: ";
    // for (size_t i = 0; i < 5; i++){
        // std::cout << intArray[i] << " ";
    // }
    // std::cout << "\n";
//
    // ::iter(intArray, 5, multiplyByTwo);
    // std::cout << "intArray: ";
    // for (size_t i = 0; i < 5; i++){
        // std::cout << intArray[i] << " ";
    // }
    // std::cout << "\n\n";
//
    // return (0);
// }
