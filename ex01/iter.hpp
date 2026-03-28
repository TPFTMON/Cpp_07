#ifndef ITER_HPP
# define ITER_HPP

// Includes:
# include <iostream>


// Messages:
# define ITER_MSG "\e[0;32miter\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class iter{

    private:
        // ... some private stuff

    public:
        // Orthodox Canonical Form:
        iter();
        iter(const iter &to_copy);
        iter& operator=(const iter &assign);
        ~iter();

        // Other member functions:
        // ... some members

};


// Other:
// ...

#endif
