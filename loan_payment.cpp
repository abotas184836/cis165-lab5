#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double loan_amount;
    std::cout << "Loan amount: $";
    std::cin >> loan_amount;
    
    double annual_rate;
    std::cout << "Annual interest rate: ";
    std::cin >> annual_rate;

    int number_of_payments;
    std::cout << "Number of payments: ";
    std::cin >> number_of_payments;
    
    double monthly_rate = annual_rate / 100.0 / 12.0;
    
    double monthly_payment = (monthly_rate * pow(1.0 + monthly_rate, number_of_payments)) / (pow(1.0 + monthly_rate, number_of_payments) - 1.0) * loan_amount;
    
    double amount_paid_back = monthly_payment * number_of_payments;
    double interest_paid = amount_paid_back - loan_amount;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Monthly Payment: $" << monthly_payment << std::endl;
    std::cout << "Amount Paid Back: $" << amount_paid_back << std::endl;
    std::cout << "Interest Paid: $" << interest_paid << std::endl;
    
    return 0;
}