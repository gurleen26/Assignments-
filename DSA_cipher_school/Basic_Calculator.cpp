// ASSIGNMENT -> Make a basic calculator using +,-,*,/,% operator. Take user input of two numbers, take input for the operation to perform, and print the answer.
#include <iostream>
using namespace std;

int main(){
    int choice, a, b, result=0;
    while(true){
        cout<<"\n\n----- CALCULATOR -----\n";
        cout<<"\n1. Addition";
        cout<<"\n2. Subtraction";
        cout<<"\n3. Multiplication";
        cout<<"\n4. Quotient";
        cout<<"\n5. Remainder";
        cout<<"\n6. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;
        
        if(choice == 1){
            cout<<"Enter number 1 : ";
            cin>>a;
            cout<<"Enter number 2 : ";
            cin>>b;
            result = a+b;
            cout<<"Addition of "<<a<<" and "<<b<<" is "<<result;
        }
        else if(choice == 2){
            cout<<"Enter number 1 : ";
            cin>>a;
            cout<<"Enter number 2 : ";
            cin>>b;
            result = a-b;
            cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<result;
        }
        else if(choice == 3){
            cout<<"Enter number 1 : ";
            cin>>a;
            cout<<"Enter number 2 : ";
            cin>>b;
            result = a*b;
            cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<result;
        }
        else if(choice == 4){
            cout<<"Enter number 1 : ";
            cin>>a;
            cout<<"Enter number 2 : ";
            cin>>b;
            result = a/b;
            cout<<"Quotient of "<<a<<" and "<<b<<" is "<<result;
        }
        else if(choice == 5){
            cout<<"Enter number 1 : ";
            cin>>a;
            cout<<"Enter number 2 : ";
            cin>>b;
            result = a%b;
            cout<<"Remainder of "<<a<<" and "<<b<<" is "<<result;
        }
        else if(choice == 6){
            cout<<"Exiting....";
            break;
        }
        else{
            cout<<"Wrong choice !";
        }
    }
}