#ifndef ITER_HPP
# define ITER_HPP

// Includes:
# include <iostream>
# include <cctype>

// Implement a function template iter that takes 3 parameters and returns nothing.
// • The first parameter is the address of an array.
// • The second one is the length of the array, passed as a const value.
// • The third one is a function that will be called on every element of the array.

// The function passed as the third parameter may take its argument by const reference
// or non-const reference, depending on the context.        // !!!

// Variant 1:
template <typename T, typename F>
void iter(T *array, size_t const length, F function(T &)){
    for (size_t i = 0; i < length; i++){
        function(array[i]);
    }
}

template <typename T, typename F>
void iter(T const *array, size_t const length, F function(const T &)){
    for (size_t i = 0; i < length; i++){
        function(array[i]);
    }
}

// Variant 2:
// template <typename T, typename F>
// void iter(T *array, size_t size, F function){
//     for (size_t i = 0; i < size; i++){
//         function(array[i]);
//     }
// }

// Variant 3:
// template <typename T>
// void iter(T *array, size_t length, void (*f)(T &)) {
//     for (size_t i = 0; i < length; i++)
//         f(array[i]);
// }

#endif
