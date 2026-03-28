#ifndef ARRAY_HPP
# define ARRAY_HPP

// Includes:
# include <iostream>


// Messages:
# define ARRAY_MSG "\e[0;32mArray\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class Array{

    private:
        // ... some private stuff

    public:
        // Orthodox Canonical Form:
        Array();
        Array(const Array &to_copy);
        Array& operator=(const Array &assign);
        ~Array();

        // Other member functions:
        // ... some members

};


// Other:
// ...

#endif
