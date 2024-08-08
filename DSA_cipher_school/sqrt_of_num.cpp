// Create a function that will return the sqrt of a number 

#include<iostream>
#include<math.h>
using namespace std;

int sqrt_of_num(int x){
    return sqrt(x) ;
}

int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    int result = sqrt_of_num(a);
    cout<<"The square root of entered numbers is : "<<result;
}