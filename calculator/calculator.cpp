#include <iostream>

using namespace std;

int main(){
    double x, y, FinalSum;

    char operation;

    cout << "you first number: ";
    cin >> x;

    cout << "you operation: ";
    cin >> operation;

    cout << "you second number: ";
    cin >> y;

    switch(operation){
        case '/':
        if(y, x != 0){
            FinalSum = x / y;
            cout << FinalSum << "\n";
        }else{
            cout << "can't divide on 0.";
        }
        break;

        case '*':
        FinalSum = x * y;
        cout << FinalSum << "\n";
        break;

        case '-':
        FinalSum = x - y;
        cout << FinalSum << "\n";
        break;

        case '+':
        FinalSum = x / y;
        cout << FinalSum << "\n";
        break;

        default:
        cout << "you mistake\n";
        break;
    }
}