#include <iostream>
#include <cmath> // for the sqrt()
int main() 
{
	double a, b, c;
	std::cout<<"enter coefficients a, b, c (\ax^2+bx+c=0):";
	std::cin>>a>>b>>c;
	if(a==0){
		std::cout<<"is not a quadratic equation(a=0)\n";
		return 1;
	}
	double D=b*b-4*a*c;
	if(D>0){
		double root1=(-b+sqrt(D))/(2*a);
			double root2=(-b-sqrt(D))/(2*a);
			std::cout<<"two real roots:"<<root1<<"and"<<root2<<"\n";
	}
	else if(D==0){
		double root=-b/(2*a);
		std::cout<<"only one real root exists"<<root<<"\n";
	} 
	else{
		double realpart =-b/(2*a);
		double imaginarypart=sqrt(-D)/(2*a);
	std::cout<<"equation has complexe roots:"<<realpart<<"+"<<imaginarypart<<"i and"<<realpart<<"-"<<imaginarypart<<"i\n";
	}
	return 0;
	}
