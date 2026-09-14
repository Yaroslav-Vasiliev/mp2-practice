#include "complex.h"

Complex::Complex() :re(0.0f), im(0.0f) {}
Complex::Complex(float _re, float _im=0.0f): re(_re), im(_im) {}
Complex::Complex(const Complex& c): re(c.re), im(c.im){}
Complex::Complex(Complex&& c) :re(c.re), im(c.im){}
Complex Complex::operator+(const Complex& c)const
{
	Complex c1(re + c.re, im + c.im);
	return c1;
}
Complex Complex::operator-(const Complex& c)const
{
	Complex c1(re - c.re, im - c.im);
	return c1;
}
Complex Complex::operator*(const Complex& c)const
{
	Complex c1(re * c.re - im * c.im,
		re * c.im + im * c.re);
	return c1;
}
const Complex& Complex::operator=(const Complex& c)
{
	if (this != &c)
	{
		re = c.re;
		im = c.im;
	}
	return *this;
}
const Complex& Complex::operator+=(const Complex& c)
{
	re += c.re;
	im += c.im;
	return *this;
}
bool Complex::operator==(const Complex& c) const
{
	return (re == c.re && im == c.im);
}
bool Complex::operator!=(const Complex& c) const
{
	return !(re == c.re && im == c.im);
}
Complex Complex::operator-() const
{
	return Complex(-re, -im);
}
std::ostream& operator<<(std::ostream& os, const Complex& c)
{
	os << c.re;
	if (c.im >= 0) { os << '+'; }
	os << c.im << 'i';
	return os;
}
std::istream& operator>>(std::istream& is, Complex& c)
{
	float _re, _im;
	if (is >> _re >> _im)
	{
		c.re = _re;
		c.im = _im;
	}
	return is;
}

