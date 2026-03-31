#ifndef ITER_HPP
# define ITER_HPP

// Includes:
# include <iostream>
# include <string>

// Implement a function template iter that takes 3 parameters and returns nothing.
// • The first parameter is the address of an array.
// • The second one is the length of the array, passed as a const value.
// • The third one is a function that will be called on every element of the array.

// The function passed as the third parameter may take its argument by const reference
// or non-const reference, depending on the context.        // !!!


template <typename T, typename F>
void iter(T *array, size_t const length, F function){
    if (!array || !function)
        return ;
    for (size_t i = 0; i < length; i++){
        function(array[i]);
    }
}


// template <typename T, typename F>             // If T/F are templates, then I don't need an overload for const?
// void iter(T const *array, size_t const length, F const function){
//     for (size_t i = 0; i < length; i++){
//         function(array[i]);                  // Yeah. From the tests I did I don't think I need an overaload.
//     }
// }


#endif
