#include "iter.hpp"

char toLower(char c){
    return (std::tolower(static_cast<int>(c)));
}

int main(){

    char charArray[] = {'H', 'E', 'L', 'L', 'O'};

        std::cout << "charArray: " << charArray << "\n";
        ::iter(charArray, 5, toLower);
        std::cout << "charArray: " << charArray << "\n";
        std::cout << "\n\n";

    return (0);
}
