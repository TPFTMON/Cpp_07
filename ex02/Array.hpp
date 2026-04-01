#ifndef ARRAY_HPP
# define ARRAY_HPP

// Includes:
# include <iostream>
# include <exception>
# include <cstddef>



// Classes:

template <typename Type>
class Array{

    private:
    Type*  _elements;
    size_t _size;

    public:
        // Orthodox Canonical Form:
        Array() : _elements(NULL), _size(0) {}

        Array(unsigned int n) : _size(n){
            _elements = new Type[n]();       // () -> initializes everything to zeros for primitive types
        }

        Array(const Array &to_copy) : _size(to_copy._size){
            _elements = new Type[_size]();
            for (size_t i = 0; i < _size; i++){
                _elements[i] = to_copy._elements[i];
            }

        }

        // I am trying to realize Copy Assignment Operator while using Copy-and-Swap Idiom
        Array& operator=(Array other){ //      'other' is passed by value, forcing the copy constructor
            // Swaping internal pointers and sizes
            Type* tempElements = this->_elements;
            this->_elements = other._elements;
            other._elements = tempElements;

            size_t tempSize = this->_size;
            this->_size = other._size;
            other._size = tempSize;

            return (*this);
            // 'other' goes out of scope here, deleting the old memory safely.
        }

        ~Array(){
            delete[] _elements;
        }


        // Other member functions:
        // Subscript Operator (Non-Const)
        Type& operator[](size_t index){
            if (index >= _size)
                throw OutOfBoundsException();
            return _elements[index];
        }

        // Subscript Operator (Const)
        const Type& operator[](size_t index) const{
            if (index >= _size)
                throw OutOfBoundsException();
            return _elements[index];
        }

        size_t size() const{
            return _size;
        }


        // Exception
        class OutOfBoundsException : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "Array index is out of bounds";
                }
        };

};



#endif
