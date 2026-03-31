#ifndef WHATEVER_HPP
# define WHATEVER_HPP

// Includes:
# include <iostream>


// • swap: Swaps the values of two given parameters. Does not return anything.

// • min: Compares the two values passed as parameters and returns the smallest one.
// If they are equal, it returns the second one.

// • max: Compares the two values passed as parameters and returns the greatest one.
// If they are equal, it returns the second one.

template <typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T const &min(T const &a, T const &b){
    return (b <= a ? b : a);
}

template <typename T>
T const &max(T const &a, T const &b){
    return (b >= a ? b : a);
}

#endif
