#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>

class Complex
{
	float re;
	float im;
public:
	Complex();
	Complex(float _re, float _im=0);
	Complex(const Complex&);
	Complex(Complex&&);
	Complex operator+(const Complex&)const;
	Complex operator-(const Complex&)const;
	Complex operator*(const Complex&)const;
	const Complex& operator=(const Complex&);
	const Complex& operator+=(const Complex&);
	bool operator==(const Complex&) const;
	bool operator!=(const Complex&) const;
	//Complex& operator++();
	//Complex& operator--();
	//Complex operator++(int);
	//Complex operator--(int);
	Complex operator-() const;
	friend std::ostream& operator<<(std::ostream&, const Complex&);
	friend std::istream& operator>>(std::istream&, Complex&);
};
#endif