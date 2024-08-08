/**Assignment

Write a C++ program that demonstrates the use of pointers with simple variables. The program should:

Declare three integer variables: a, b, and c.
Declare three pointers: p1, p2, and p3.
Assign the address of a to p1, the address of b to p2, and the address of c to p3.
Use the pointers to assign values to a, b, and c.
Calculate the sum of a, b, and c using the pointers and store the result in a variable sum.
Print the values of a, b, c, and sum.**/
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    int *p1, *p2, *p3;
    
    p1 = &a;
    p2 = &b;
    p3 = &c;
    
    cout<<"a : ";
    cin>>*p1;
    cout<<endl;
    cout<<"b : ";
    cin>>*p2;
    cout<<endl;
    cout<<"c : ";
    cin>>*p3;
    cout<<endl;
    
    int sum = *p1 + *p2 + *p3;
    cout<<"Value a is : "<<*p1<<endl;
    cout<<"Value b is : "<<*p2<<endl;
    cout<<"Value c is : "<<*p3<<endl;
    cout<<"Sum of entered numbers is : "<<sum<<endl;
    
    return 0;
}