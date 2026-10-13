#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double principal;
    std::cout << "Principal: $";
    std::cin >> principal;
    
    double rate;
    std::cout << "Annual interest rate: ";
    std::cin >> rate;
    rate = rate / 100;
    
    double times_compounded;
    std::cout << "Times compounded: ";
    std::cin >> times_compounded;
    
    double amount = principal * std::pow(1.0 + rate / times_compounded, times_compounded);
    double interest_earned = amount - principal;
    
	std::cout << std::fixed << std::setprecision(2);
    std::cout << "Interest Earned: $" << interest_earned << std::endl;
    std::cout << "Amount in Savings: $" << amount << std::endl;
    
    return 0;
}