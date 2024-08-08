// Create a function that will return the sum of 3 numbers

#include<iostream>
using namespace std;

int sum_of_num(int x, int y, int z){
    return x+y+z ;
}

int main(){
    int a,b,c;
    cout<<"Num 1 : ";
    cin>>a;
    cout<<"Num 2 : ";
    cin>>b;
    cout<<"Num 3 : ";
    cin>>c;
    int sum = sum_of_num(a,b,c);
    cout<<"The sum of entered numbers is : "<<sum;
}