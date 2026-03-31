#ifndef ARRAY_HPP
# define ARRAY_HPP

// Includes:
# include <iostream>


// Messages:
# define ARRAY_MSG "\e[0;32mArray\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define PARAM_CONSTR_MSG "\e[0;34mParameter Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:

template <typename T>
class Array{

    private:
    T*     _elements;
    size_t _size;

    public:
        // Orthodox Canonical Form:
        Array();
        Array(unsigned int n);
        Array(const Array &to_copy);
        Array& operator=(const Array &assign);
        ~Array();

        // Other member functions:
        size() const;
        T& operator[](size_t index); // ?
        const T& operator[](size_t index) const; // ?

};


// Other:
// ...

#endif
