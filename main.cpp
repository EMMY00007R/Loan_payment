#include <iostream>
#include <cmath>  // For power function pow()

using namespace std;

int main() {
    // Declare variables
    double loanAmount, annualInterestRate, monthlyInterestRate;
    int loanTermYears, numberOfPayments;
    double monthlyPayment;

    // Get loan amount from the user
    cout << "Enter the loan amount (principal): ";
    cin >> loanAmount;

    // Get annual interest rate from the user
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> annualInterestRate;

    // Get loan term in years from the user
    cout << "Enter the loan term (in years): ";
    cin >> loanTermYears;

    // Calculate the monthly interest rate and number of payments
    monthlyInterestRate = (annualInterestRate / 100) / 12; // Convert annual rate to monthly
    numberOfPayments = loanTermYears * 12;  // Convert years to months

    // Calculate the monthly payment using the formula
    if (monthlyInterestRate != 0) {
        monthlyPayment = loanAmount * monthlyInterestRate * pow(1 + monthlyInterestRate, numberOfPayments) /
                         (pow(1 + monthlyInterestRate, numberOfPayments) - 1);
    } else {
        // Special case when interest rate is 0%
        monthlyPayment = loanAmount / numberOfPayments;
    }

    // Output the monthly payment
    cout << "Your monthly payment is: $" << monthlyPayment << endl;

    return 0;
}

