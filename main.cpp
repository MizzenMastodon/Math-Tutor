#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int main() { 
  //creates 2 random numbers fom 0-3688
  random_device myEngine;
  uniform_int_distribution<int> randomInt(0,4999);
  int num1 = randomInt (myEngine);
  int num2 = randomInt (myEngine);

  //uses the two random numbers to create an addition problem
  cout << setw(6) << num1 << endl;
  cout << "+" << setw(5) << num2 << endl;
  cout << "------";
  cout << "    Press enter after you have answered the problem to check your work";
  cin.get();
  
  cout << setw(6) << num1 + num2;
  
}