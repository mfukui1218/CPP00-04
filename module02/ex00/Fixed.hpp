#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <fstream>

class Fixed
{
    private:
    	int values;
    	static const int fractionalBits = 8;
    public:
    	Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};




#endif