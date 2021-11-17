#include <iostream>
using namespace std;

int main()
{
    char operand;
    float number1,number2;
  

char play_again = 'y';
while (play_again == 'y' || play_again == 'Y') // Everything needs to go in a loop
	{

    cout << "Enter operator ( + or - or * or / ): ";
    cin >> operand;
  
    cout << "Enter Your First Number: ";
    cin >> number1;
    cout << "Enter Your Second Number: ";
    cin >> number2;

{
    switch(operand)
    {
        case '+':
            cout << "Result: " << number1+number2 << endl   ;
            break;
        case '-':
            cout << "Result: " << number1-number2 << endl   ;
            break;
        case '*':
            cout << "Result: " << number1*number2 << endl   ;
            break;
        case '/':
           if(number2 == 0)
               cout << "Oof, the denominator can't be 0\n";
           else
               cout << "Result: " << number1/number2 << endl   ;
            break;
        default:
            cout << "Invalid Operator!\n";
            break;
    }
}
cout <<"Would You like to Calculate again? (Y/N) \n";
cin >> play_again;
    }
cout << "\nHope this Helped!\n";
return 0; 
}