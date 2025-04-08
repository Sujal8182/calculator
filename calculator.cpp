#include <iostream>
using namespace std;
void getInput(int &first,int &second){
    cout << "enter your first number : ";
    cin >> first;
    cout << "enter your second number : ";
    cin >> second;
}
void add(int a,int b){
    
    cout << "Addition of "<<a<<" and "<<b<<"  is : "<< a + b << endl;
}
void sub(int a,int b){
    
    cout << "Subtraction of "<<a<<" and "<<b<<"  is : "<< a - b << endl;
}
void division(int a,int b){
    if (b == 0) {
        cout << "Error: Division by zero is not allowed!" << endl;
    } else {
        cout << "Division of " << a << " by " << b << " is : " << a / b << endl;
    }
}
void mul(int a,int b){
    
    cout << "Multiplication of "<<a<<" and "<<b<<"  is : "<< a * b << endl;
}
void remain(int a,int b){
    
    if (b == 0) {
        cout << "Error: Division by zero is not allowed!" << endl;
    } else {
        cout << "Remainder of " << a << " divided by " << b << " is : " << a % b << endl;
    }
}


int main(){
    int user;
    do
    {
        cout << "\n------Welcome to Calculator-----"<< endl;
        cout << "Press 1 for Addition " << endl;
        cout << "Press 2 for Subtraction " << endl;
        cout << "Press 3 for Division " << endl;
        cout << "Press 4 for Multiplication " << endl;
        cout << "Press 5 for Remainder" << endl;
        cout << "Press 0 for Exit" << endl;
        cout << "Enter your choice : ";
        cin >> user;
        int first = 0, second = 0;
            if (user >=1 && user <=5){
            getInput(first,second);
            };
        switch (user)
        {
        case 1:
            add(first,second);
            break;
        case 2:
            sub(first,second);
            break;
        case 3:
            division(first,second);
            break;
        case 4:
            mul(first,second);
            break;
        case 5:
            remain(first,second);
            break;
        case 0:
            break;
        default:
            cout << "Invalid output"<< endl;
            break;
        }
    } while (user != 0);
    cout << "We are happy to offer our service" << endl;
}
