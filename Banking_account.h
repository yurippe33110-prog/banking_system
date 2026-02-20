#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <iostream>

class BankAccount{
  public:

    static int number;



    BankAccount(std::string customerName){
      name = customerName;
      balance = 0.0f;
      number ++;
    }


    ~BankAccount(){
      number --;
    }


    

    void transfer(BankAccount &other, float amount){
      if (amount>0 && balance >=amount){
        this -> withdraw(amount);
        other.deposit(amount);
      }
    }

    static int number_accounts(){
      return number;
    }

    float get_balance() const{
      return balance;
    }


    void deposit(float amount){
      if(amount > 0){
        balance += amount;
      }
    }

    void withdraw(float amount){
      if(amount >0 && (balance - amount) >= 0 ){
          balance -= amount;
      }
      else if ( amount > balance){
          std::cout << "Insufficient funds for " << name << "!" << std::endl;

      }
    }



      std::string name;
    private:
      float balance;
};

inline int BankAccount::number = 0;

#endif
