#include<iostream>
using namespace std;

double add(double a,double b){
    return a+b;
}

double subtract(double a,double b){
    return a-b;
}

double multiply(double a,double b){
    return a*b;
}

double divide(double a,double b){
    return a/b;
}

int main (){
    double a,b;
    char op,choice;
    cout << "Enter the first value: ";
    cin >> a;
    do {
        cout << "Enter the operator and the second value: ";
        cin >> op >> b;
        
        switch(op){
            case '+':
              a=add(a,b);
              break;
              
            case '-':
              a=subtract(a,b);
              break;
              
            case '*':
              a=multiply(a,b);
              break;
              
            case '/':
              if(b == 0.0)
                cout << "Invalid division!" << endl;
              else
                a=divide(a,b);
              break;
            
            default:
            cout << "Invalid operator!" << endl;
            break;
        }
        cout << "Current result: " << a << endl;
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    }while(choice=='Y'||choice=='y');
    cout << "Final Result: " << a <<endl;
    return 0;
}