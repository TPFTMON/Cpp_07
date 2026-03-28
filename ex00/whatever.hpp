#ifndef WHATEVER_HPP
# define WHATEVER_HPP

// Includes:
# include <iostream>


// Messages:
# define WHATEVER_MSG "\e[0;32mwhatever\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class whatever{

    private:
        // ... some private stuff

    public:
        // Orthodox Canonical Form:
        whatever();
        whatever(const whatever &to_copy);
        whatever& operator=(const whatever &assign);
        ~whatever();

        // Other member functions:
        // ... some members

};


// Other:
// ...

#endif
