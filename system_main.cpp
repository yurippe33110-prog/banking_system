#include <iostream>
      
int main()
{
  BankAccount a( "Lisa" );

  std::cout << a.number << std::endl;

  BankAccount b( "Bankyaccount McBankaccountface" );

  std::cout << b.number << std::endl; 
  std::cout << BankAccount::number << std::endl; 
  
  a.deposit( 100 );

  return 0;
}
