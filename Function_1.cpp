#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */ 
string coinFlip() {
   int r =rand() % 2;
   if (r == 1) 
      return "Heads.";
   else
      return "Tails.";
   
}

int main() {
   // Add more variables as needed
   int numFlips;
   


   
   srand(2);  // Unique seed

   /* Type your code here */
   cout<<"How many times would you like to flip the coin?\n";
   cin>>numFlips;
   for (int i= 0; i<numFlips; i++) {
      cout<<coinFlip();
      cout<<endl;
   }


   return 0;
}
