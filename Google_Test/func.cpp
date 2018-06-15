#include <math.h>
#include "pch.h"

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

double factorial(double num){
	double result = 1;
	if (num < 0){
		result = 0;
		return result;
	}else if (num == 0){
		result = 1;
		return result;
	}else {
		for (int i = 1;i <= num;i++)
			result = i * result;
		return result;
	}
}

double percentage(double num1,double num2){
	double result,tmp;
	tmp = num1/100;
	result = tmp * num2;
	return result;
}

double sinus(double num){
	double result,tmp;
	tmp = (num * pi)/180;
	result = sin(tmp);
	return result;
}

double cosinus(double num){
	double result,tmp;
	tmp = (num * pi)/180;
	result = cos(tmp);
	return result;
}

double tg(double num){
	double result,tmp;
	if((num == 90) || (num == 270))
		return 7878;
	else{
	tmp = (num * pi)/180;
	result =tan(tmp);
	return result;
	}
}

double ctg(double num){
	double result,tmp;
		if((num == 0) || (num == 180) || (num == 360))
		return 787890;
	tmp = (num * pi)/180;
	result = 1/tan(tmp);
	return result;
}

double power(double num1,double num2){
	double result = num1;
	if (num2 == 0){
		result = 0;
		return result;
	}else if(num2 == 1){
		result = num1;
		return result;
	}else if(num2 == -1){
		result = 1/num1;
		return result;
	}else if(num2 >= 2){
		for(int i = 2;i <= num2;i++)
			result *= num1;
		return result;
	}else if(num2 <= -2){
		double n = num2;
		n *= -1;
		for(int i = 2;i <= n;i++)
			result *= num1;
		result = 1/result;
		return result;
	}
}

double square_root(double num1){
	double result;
	result = sqrt(num1);
	return result;
}

double epow(double num){
	double result = 1;
	if (num == 0){
		result = 1;
		return result;
	}else if(num == 1){
		result = e;
		return result;
	}else if(num == -1){
		result = 1/e;
		return result;
	}else if(num >= 2){
		for(int i = 1;i <= num;i++)
			result *= e;
		return result;
	}else if(num <= -2){
		double n = num;
		n *= -1;
		for(int i = 1;i <= n;i++)
			result *= e;
		result = 1/result;
		return result;
	}
}

double lg(double num){
	double result;
	if(num <= 0)
		return 1333;
	else{
		result = log(num);
		return result;
	}
}
