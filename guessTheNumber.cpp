#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void guessGame(int number) {
    int guess;
    while (true)
     {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == number) {
            cout << "Congratz";
            return;
        }
        else {
            cout << "Wrong guess\n";
        }
     }
    
    
    

}




int main() {
   srand(time(0));
   int choice;
   int number = rand() % 10 + 1;
   int guess;
   cout << "Do you want to play a game? 1 Yes, 2 No ";
   cin >> choice;
   if (choice == 2 || choice != 1) 
   {
    cout << "Bye";
    return 1;
   }

   cout << "I am going to have a number between 1-10 in my head\nWhat is your guess? ";
   

  
    guessGame(number);
 
   
  


 
   
  


    

   


}