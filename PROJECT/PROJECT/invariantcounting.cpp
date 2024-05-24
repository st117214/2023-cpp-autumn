#include<iostream>
#include "invariantcounting.h"

double I = 0;
double D = 0;
double A = 0;
double K = 0;

double invariantI1(double a, double c, double I)
{
	I = a + c;

	return I;
}

double invariantI2(double a, double b, double c, double D)
{
	D = a * c - b * b;

	return D;

}

double invariantI3(double a, double b, double c, double d, double e, double f,  double A)
{
	A = a * (c * f - e * e) - b * (b * f - e * d) + d * (b * e - c * d);

	return A;

}
       
double invariantI4(double a, double c, double d, double e, double f, double K)
{
	K = (a * f - d * d) + (c * f - e * e);

	return K;
}