#include "complex_numbers.h"
#include "math.h"

namespace complex_numbers {
    int Complex::real() const {
        return this->_real;
    }

    int Complex::imag() const {
        return this->_imag;
    }

    float Complex::abs() const {
        return sqrt(this->real() * this-> real() + this->imag() * this->imag());

    }

    Complex Complex::conj() const {
        return Complex(this->real(), -this->imag());
    }

    Complex Complex::exp() const {
        float real = ::exp(_real) * cos(_imag);
        float imag = ::exp(_real) * sin(_imag);
        return Complex(real, imag);
    }

    Complex Complex::operator*(const Complex& other) const {
        float real = this->real() * other.real() - this->imag() * other.imag();
        float imag = this->imag() * other.real() + this->real() * other.imag();
        return Complex(real, imag);
    }

    Complex Complex::operator/(const Complex& other) const {
        float real = this->real() * other.real() + this->imag() * other.imag();
        float imag = this->imag() * other.real() - this->real() * other.imag();
        float denom = other.real() * other.real() + other.imag() * other.imag();

        return Complex(real/denom, imag/denom);
    }

    Complex Complex::operator+(const Complex& other) const {
        float real = this->real() + other.real();
        float imag = this->imag() + other.imag();
        return Complex(real, imag);
    }

    Complex Complex::operator-(const Complex& other) const {
        float real = this->real() - other.real();
        float imag = this->imag() - other.imag();
        return Complex(real, imag);
    }
}  // namespace complex_numbers
