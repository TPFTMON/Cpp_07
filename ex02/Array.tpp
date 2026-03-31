#include "Array.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Array::Array()
 : _elements(NULL), _size(0)
{

    std::cout << DEF_CONSTR_MSG << ARRAY_MSG;

}

Array::Array(unsigned int n)
 : _size(n)
{

    _elements = new T[n]();
    std::cout << PARAM_CONSTR_MSG << ARRAY_MSG;

}

Array::Array(const Array &to_copy){

    std::cout << COPY_CONSTR_MSG << ARRAY_MSG;
    // ... copying

}

Array& Array::operator=(const Array &assign){

    std::cout << COPY_ASSIGN_OP_MSG << ARRAY_MSG;
    if (this != &assign){
        // ... assigning
    }
    return (*this);

}

Array::~Array(){

    std::cout << DESTR_MSG << ARRAY_MSG;

}



// ================================================================
//                OTHER ARRAY MEMBER FUNCTIONS
// ================================================================
Array::size() const{

}

T& Array::operator[](size_t index){

}

const T& Array::operator[](size_t index) const{

}



// ================================================================
//                  OTHER ARRAY FUNCTIONS
// ================================================================

// ... other functions
