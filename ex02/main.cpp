#include "Array.hpp"
#include <string>

int main(){

    Array<int> numbers(5);
    Array<int> empty;


    // Testing basics
    // try{
        for (size_t i = 0; i < numbers.size(); i++){
            numbers[i] = i * 10;
        }
        std::cout << "numbers size: " << numbers.size() << "\n";
        std::cout << "empty size: " << empty.size() << "\n";
        std::cout << "numbers[2]: " << numbers[2] << "\n\n\n";
    // }
    // catch (const std::exception& e){
    //     std::cerr << "Error caught: " << e.what() << "\n\n";
    // }


    // Testing deep copy
    {
        Array<int> tmp = numbers;
        std::cout << "tmp[2] before change: " << tmp[2] << " (Original: " << numbers[2] << ")" << "\n";
        tmp[2] = 999;
        std::cout << "tmp[2] after change:  " << tmp[2] << " (Original: " << numbers[2] << ")" << "\n";
        if (tmp[2] != numbers[2]){
            std::cout << "Result: they are NOT identical" << "\n\n\n";
        }
        else{
            std::cout << "Result: I FAILED (sad noises)" << "\n";
        }
    }


    // Testing assignment
    Array<int> other(2);
    other[0] = 42;
    other = numbers; // Test standard assignment
    std::cout << "other[4] after assignment: " << other[4] << "\n\n\n";


    // Testing exceptions
    try{
        std::cout << "Attempting to access index -1..." << "\n";
        numbers[-1] = 0;
    }
    catch (const std::exception& e){
        std::cerr << "Error caught: " << e.what() << "\n";
    }
    try{
        std::cout << "Attempting to access index [size]..." << "\n";
        numbers[numbers.size()] = 0;
    }
    catch (const std::exception& e){
        std::cerr << "Error caught: " << e.what() << "\n\n\n";
    }


    // Testing const
    const Array<int> const_numbers = numbers;
    // const_numbers[0] = 5; // This line will cause a COMPILE ERROR if uncommented (obviously)
    std::cout << "Const access: const_numbers[1] = " << const_numbers[1] << "\n\n\n";


    // Testing with strings and size() again
    Array<std::string> strings(3);
    strings[0] = "COOL";
    strings[1] = "IMPORTANT";
    strings[2] = "miaou";
    for (size_t i = 0; i < strings.size(); i++){
        std::cout << "strings[" << i << "]: " << strings[i] << "\n";
    }

    return (0);
}
