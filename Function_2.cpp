#include <iostream>
#include <iomanip>
using namespace std;
// We will use cents for all monetary values. This will let us
// work with integer, rather than floating-point, variables.
const int TWINKIE_PRICE = 350;

// Prompt the user to insert coins until enough has been paid to buy
// a twinkie. The total amount inserted, in cents, is returned.
int accept_money();


// Returns the amount of change that should be returned to the user.
int compute_change(int total_paid);

int main()
{
      // Declare variables for the amount of money that the user enters,
    // along with the change that is to be returned to them.
    

    // Make sure that monetary values we output are formatted with
    // two digits after the decimal point.
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // Collect money from the user
    int money_entered = accept_money();

    // Figure out how much change to return
    int change = compute_change(money_entered);

    // Dispense the twinkie
    cout << "\nEnjoy your deep-fried twinkie. Your change is $"
         << change/100.0 << endl;

    return 0;
}

int accept_money()
{
  //write your code
  int total_Paid = 0;
  int input;
  while (TWINKIE_PRICE > total_Paid) {
    cout<<"Insert next value of coin or dollar in total cents (100, 25, 10, or 5): \n";
    cin>>input;
    total_Paid += input;
    cout<<total_Paid<<" cents have been paid so far.\n";
    
    
  }
  return total_Paid;
}

int compute_change(int money_entered) 
{
//write your code
return money_entered - TWINKIE_PRICE;
}

