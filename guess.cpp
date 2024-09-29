# include <iostream>
# include <ctime>

using namespace std;



int main(){
     int n, number;
     string text;

     bool guess = true;
     while (guess){
          cout << "Guess number between 1 and 10: ";
          cin >> n;

          number = (rand() % 10) + 1;

          if (n == number){
               cout << "You guessed it" << endl;
          }
          else{
               cout << "You not gussed. Number" << " " << number << endl;
          }

          cout << "Do you want to play again? (yes/no): " << endl;
          cin >> text;

          if (text == "no"){
               guess = false;
          }
     }
     cout << "Game over!" << endl;
     system("pause");

     return 0;
}




