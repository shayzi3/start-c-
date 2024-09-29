#include <iostream>
using namespace std;


int switcher(char arg, int a, int b){
     switch (arg){
          case '+':
               return a + b;
               break;

          case '-':
               return a - b;
               break;
          
          case '*':
               return a * b;
               break;
          
          case '/':
               return a / b;
               break;
          
          default:
               return 000;
               break;
     }
}


int main(){
     int a, b;
     char oper;
     string text;

     bool status = true;
     while (status){
          cout << "Enter first number: ";
          cin >> a;

          cout << "Enter second number: ";
          cin >> b;

          if (a == 0 || b == 0){
               cout << "Error!" << endl;
               return 0;
          }

          cout << "Enter operator(+, -, *, /): ";
          cin >> oper;

          int sw = switcher(oper, a, b);
          if (sw == 000){
               cout << "Invalid operator!" << endl;
               return 0;
          }
          cout << a << oper << b << " = " << sw << endl;

          cout << "Do you want again?" << endl;
          cin >> text;

          if (text == "no"){
               status = false;
          }
     }
     cout << "Game over!" << endl;
     system("pause");

     return 0;
}

