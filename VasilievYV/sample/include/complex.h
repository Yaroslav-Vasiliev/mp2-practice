#ifndef __H__
#define __H__
#include<iostream>
class Complex
{
	float re;
	float im;
public:
	Complex();
	Complex(float _re, float _im);
	Complex(const Complex&);
	Complex(const Complex&&);
	~Complex();
	Complex operator+(const Complex&);
	//Complex operator+(const float);
	Complex operator-(const Complex&);
	//Complex operator-(const float);
	Complex operator*(const Complex&);
	//Complex operator*(const float);
	const Complex& operator=(const Complex&);
	const Complex& operator+=(const Complex&);
	bool operator==(const Complex&);
	bool operator>=(const Complex&);
	bool operator<=(const Complex&);
	bool operator!=(const Complex&);
	Complex operator++();
	Complex operator--();
	Complex operator-();
	friend std::ostream& operator<<(std::ostream, const Complex&);
	friend std::istream& operator>>(std::istream, Complex&);
};
#endif