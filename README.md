# Banking Account System (C++)

A C++ implementation demonstrating Objected_Oriented Programming (OOP) principles through a bank account management system.

Designed a C++ banking simulation by applying OOP principles to implement secure balance updates and transaction tracking, ensuring robust error handling and data consistency. 
Utilized pass-by-reference and static members to optimize memory efficiency and global state management. Prioritized data encapsulation by using private access modifiers, preventing unauthorized direct access to sensitive financial records. Resolved critical logic errors in the fund transfer module by implementing strict validation protocols, preventing unintended overdrafts and ensuring data consistency between accounts.

## Overview
This project showcases a 'BankAccount' class that handles basic financial operations.
**Encapsulation** Protecting the 'balance' variable using private access modifies.
**static members** Tracking the total number of active accounts across the system.
**Memory management** Using constructions and destructors to manage account counts.
**Const-correctness** Ensuring read-only methods do not modify objects states.

## Features
**Deposit & Withdrow:** Securely add or remove funds with validation
**Transfer** Transfer money between two different account instances using references.
**Account Tracking** Real-time count of active 'BankAccount' objects using static variables.

## Technical stack 
**Language** C++
**Concepts** OOP, static methods, destructors, inline initialization

## Key code snippet
The 'Transfer' method demonstrates how to interact between two objects:
<banking_account.h>
void transfer(BankAccount &other, float amount){
    if (amount > 0 && balance >= amount){
        this -> withdraw(amount);
        other.deposit(amount);
    }
}

## Example Output
The test script 'main.cpp' demonstrates how static variables track the number of instances:

- Create account "Lisa" -> Output: 1
- Create account "Bankyaaccount McBankaccountface" -> Output: 2
- Access via class 'BankAccount::Number' -> Output: 2

