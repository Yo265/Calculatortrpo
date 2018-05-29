#include <math.h>

#define pi 3.1415926535897932385
#define e 2.7182818284590452354

double multipl(double num1,double num2){
	double result;
	result = num1 * num2;
	return result;
}

double division(double num1,double num2){
	double result;
	if(num2 == 0)
		return result;
	else {
		result = num1/num2;
		return result;
	}
}

double subtraction(double num1,double num2){
	double result;
	result = num1 - num2;
	return result;
}

double addition(double num1,double num2){
	double result;
	result = num1 + num2;
	return result;
}
