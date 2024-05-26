#include <iostream>
#include <string>

class BankAccount {
private:
  int accountNumber;
  std::string name;
  std::string accountType;
  double balance;

public:
  // Initialize members with default values (can be modified)
  void initialize(int accNum, const std::string& n, const std::string& type, double bal = 0.0) {
    accountNumber = accNum;
    name = n;
    accountType = type;
    balance = bal;
  }

  // Deposit amount
  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      std::cout << "Deposit successful for account " << accountNumber << std::endl;
    } else {
      std::cout << "Invalid deposit amount." << std::endl;
    }
  }

  // Withdraw amount with balance check
  void withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      std::cout << "Withdrawal successful for account " << accountNumber << std::endl;
    } else {
      std::cout << "Insufficient balance or invalid withdrawal amount." << std::endl;
    }
  }

  // Display account information
  void displayBalance() {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Account Type: " << accountType << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
  }
};

int main() {
  const int numCustomers = 10;
  BankAccount customers[numCustomers]; // Array of BankAccount objects

  // Sample data (can be replaced with user input)
  customers[0].initialize(1001, "John Doe", "Savings");
  customers[1].initialize(1002, "Jane Smith", "Checking", 500.00);
  // ... (initialize remaining customers)

  int choice, accountNum;
  double amount;

  do {
    std::cout << "\nBank Account Management System" << std::endl;
    std::cout << "1. Deposit" << std::endl;
    std::cout << "2. Withdraw" << std::endl;
    std::cout << "3. Display Balance" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
      case 1:
        std::cout << "Enter account number: ";
        std::cin >> accountNum;
        std::cout << "Enter amount to deposit: $";
        std::cin >> amount;
        bool found = false;
        for (int i = 0; i < numCustomers; ++i) {
          if (customers[i].accountNumber == accountNum) {
            customers[i].deposit(amount);
            found = true;
            break;
          }
        }
        if (!found) {
          std::cout << "Account not found." << std::endl;
        }
        break;
      case 2:
        std::cout << "Enter account number: ";
        std::cin >> accountNum;
        std::cout << "Enter amount to withdraw: $";
        std::cin >> amount;
        found = false;
        for (int i = 0; i < numCustomers; ++i) {
          if (customers[i].accountNumber == accountNum) {
            customers[i].withdraw(amount);
            found = true;
            break;
          }
        }
        if (!found) {
          std::cout << "Account not found." << std::endl;
        }
        break;
      case 3:
        std::cout << "Enter account number: ";
        std::cin >> accountNum;
        found = false;
        for (int i = 0; i < numCustomers; ++i) {
          if (customers[i].accountNumber == accountNum) {
            customers[i].displayBalance();
            found = true;
            break;
          }
        }
        if (!found) {
          std::cout ... 
