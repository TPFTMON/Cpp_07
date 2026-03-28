#include "whatever.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

whatever::whatever(){

    std::cout << DEF_CONSTR_MSG << WHATEVER_MSG;

}

whatever::whatever(const whatever &to_copy){

    std::cout << COPY_CONSTR_MSG << WHATEVER_MSG;
    // ... copying

}

whatever& whatever::operator=(const whatever &assign){

    std::cout << COPY_ASSIGN_OP_MSG << WHATEVER_MSG;
    if (this != &assign){
        // ... assigning
    }
    return (*this);

}

whatever::~whatever(){

    std::cout << DESTR_MSG << WHATEVER_MSG;

}



// ================================================================
//                OTHER WHATEVER MEMBER FUNCTIONS
// ================================================================

// ... other members



// ================================================================
//                  OTHER WHATEVER FUNCTIONS
// ================================================================

// ... other functions
