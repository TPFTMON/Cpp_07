#include "iter.hpp"

void multiplyByTwo(int &n){
    n *= 2;
}

char toLower(char &c){

    c = std::tolower(c);
    return (c);
}

int main(){

    int intArray[] = {1, 2, 3, 4, 5};

    std::cout << "intArray: ";
    for (size_t i = 0; i < 5; i++){
        std::cout << intArray[i] << " ";
    }
    std::cout << "\n";

    ::iter(intArray, 5, multiplyByTwo);
    std::cout << "intArray: ";
    for (size_t i = 0; i < 5; i++){
        std::cout << intArray[i] << " ";
    }
    std::cout << "\n\n";



    char charArray[] = {'H', 'E', 'L', 'L', 'O'};

    std::cout << "charArray: " << charArray << "\n";
    ::iter(charArray, 5, toLower);
    std::cout << "charArray: " << charArray << "\n";
    std::cout << "\n\n";

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
