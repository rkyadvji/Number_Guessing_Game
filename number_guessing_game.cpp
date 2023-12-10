#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  srand(time(0));
  int number = (rand() % 100) + 1; 
  int guess = 0;
  int t = 0;
  cout<<"\n---------- // WELCOME TO NUMBER GUESSING GAME // ----------\n"<<endl;
  do
  {
    cout << "Enter a number between (1-100): ";
    cin >> guess;
    t++;
    
    if (guess > number)
      cout << "Guess lower!" << endl;
    else if (guess < number)
      cout << "Guess higher!" << endl;
    else
      cout << "Congrats! & You got it in " << t << " guesses!"<< endl;
      
  } while (guess != number);
   
  return 0;
}