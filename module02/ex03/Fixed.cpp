#include "Fixed.hpp"

Fixed::Fixed() : value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue){
	value = intValue << fractionalBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float float_value){
	value = roundf(float_value * (1 << fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

bool Fixed::operator>(const Fixed& other) const {
    return value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
    return value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
    return value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
    return value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
    return value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return value != other.value;
}

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.setRawBits(value + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.setRawBits(value - other.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.setRawBits((value * other.getRawBits()) >> fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    result.setRawBits((value << fractionalBits) / other.getRawBits());
    return result;
}

Fixed& Fixed::operator++(){
	value++;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed temp (*this);
	value++;
	return temp;
}

Fixed& Fixed::operator--(){
	value--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed temp (*this);
	value--;
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
	return((a < b) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	return((a < b) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
	return((a > b) ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
	return((a > b) ? a : b);
}


float Fixed::toFloat(void) const {
    return (float)value / (1 << fractionalBits);
}

int Fixed::toInt(void) const {
    return value >> fractionalBits;
}

int Fixed::getRawBits(void) const {
    return value;
}

void Fixed::setRawBits(int const raw) {
    value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}