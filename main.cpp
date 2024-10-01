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
  //creates a variable for the student's answer
  int studentAnswer;
  //uses the two random numbers to create an addition problem
  cout << "Press enter after you have given your answer to check your work\n\n";

  cout << setw(6) << num1 << endl;
  cout << "+" << setw(5) << num2 << endl;
  cout << "------\n  ";
  
  cin >> studentAnswer;

  if (studentAnswer == (num1 + num2)) {
    cout << "You are correct!";
  }
  else {
    cout << "Your answer is not correct.\n";
    cout << "The correct answer is " << num1 + num2;
  }
}