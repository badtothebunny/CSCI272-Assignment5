#include "Complex.h"
//Complex class implementation section.
//Programmed by Badtothebunny
Complex::Complex()
{
	real = 0;
	imaginary = 0;
}
Complex::Complex(float r, float i)
{
	real = r;
	imaginary = i;
}
void Complex::getComplex()
{
	cout<<"Enter real number and imaginary number: "<<endl;
	cin>>real>>imaginary;
}
void Complex::setComplex(float rl, float iy)
{
	real = rl;
	imaginary = iy;
}
void Complex::displayComplex()
{
	cout<<"Complex number: \t"<<real<<"+i"<<imaginary<<endl;
}
float Complex::getReal()
{
	return real;
}
float Complex::getImaginary()
{
	return imaginary;
}
Complex Complex::operator+(Complex &add)
{
	Complex ans;
	ans.real = real + add.real;
	ans.imaginary = imaginary + add.imaginary;
	return ans;
}
Complex Complex::operator-(Complex &sub)
{
	Complex ans;
	ans.real = sub.real - real;
	ans.imaginary = sub.imaginary - imaginary;
}
Complex Complex::operator*(Complex &mul)
{
	Complex ans;
	ans.real = (real * mul.real) - (imaginary * mul.imaginary);
	ans.imaginary = (real * mul.imaginary) + (imaginary * mul.real);
	return ans;
}
Complex Complex::operator/(Complex &div)
{
	Complex ans;
	ans.real = ((real * div.real)+(imaginary * imaginary))/((div.real * div.real)-(div.imaginary * div.imaginary));
	ans.imaginary = ((imaginary * div.real)-(real * div.imaginary))/((div.real * div.real)-(div.imaginary * div.imaginary));
	return ans;
}
void Complex::operator=(Complex &eql)
{
	real = eql.real;
	imaginary = eql.imaginary;
}
bool Complex::operator==(Complex &equ)
{
	if (real == equ.real && imaginary == equ.imaginary)
		return true;
	else
		return false;
}

