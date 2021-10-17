#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H

namespace complex_numbers {
    class Complex {
        private:
            float _real = 0.0;
            float _imag = 0.0;
        public:
            Complex(float real, float imag)
                : _real(real), _imag(imag) {};

            int real() const;

            int imag() const;

            float abs() const ;

            Complex conj() const;

            Complex exp() const;

            Complex operator*(const Complex& other) const;

            Complex operator+(const Complex& other) const;

            Complex operator-(const Complex& other) const;

            Complex operator/(const Complex& other) const;

    };
}  // namespace complex_numbers

#endif  // COMPLEX_NUMBERS_H
