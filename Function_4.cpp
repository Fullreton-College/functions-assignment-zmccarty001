#include <iostream>
using namespace std;

//define necessary functions
void computeCoins(int coinValue, int&num, int&amountLeft);
int main()
{
  int amount;
  char again = 'y';
  while (again == 'y' || again == 'Y') {
    cout << "Enter an amount of change (1-99 cents); ";
    cin>>amount;

    int amountLeft = amount;
    int quarters, dimes, pennies;

    computeCoins(25, quarters, amountLeft);
    computeCoins(10, dimes, amountLeft);
    computeCoins(1, pennies, amountLeft);

    cout<<amount<<" cents can be given back as "<<quarters<<" quarters, "<<dimes<<" dimes and "<<pennies<<" pennies.\n";
    cout<<"Calculate a different amount of change? (Y or N): \n";
    cin>>again;
    cout<<endl;
  }

  //your code goes here

return 0;
}

//implement functions
void computeCoins(int coinValue, int&num, int&amountLeft) {
    num = amountLeft / coinValue;
    amountLeft = amountLeft % coinValue;

    }
