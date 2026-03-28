#include "iter.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

iter::iter(){

    std::cout << DEF_CONSTR_MSG << ITER_MSG;

}

iter::iter(const iter &to_copy){

    std::cout << COPY_CONSTR_MSG << ITER_MSG;
    // ... copying

}

iter& iter::operator=(const iter &assign){

    std::cout << COPY_ASSIGN_OP_MSG << ITER_MSG;
    if (this != &assign){
        // ... assigning
    }
    return (*this);

}

iter::~iter(){

    std::cout << DESTR_MSG << ITER_MSG;

}



// ================================================================
//                OTHER ITER MEMBER FUNCTIONS
// ================================================================

// ... other members



// ================================================================
//                  OTHER ITER FUNCTIONS
// ================================================================

// ... other functions
