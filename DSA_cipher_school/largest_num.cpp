// Find the largest number among three numbers

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Num 1 : ";
    cin>>a;
    cout<<"Num 2 : ";
    cin>>b;
    cout<<"Num 3 : ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is the largest number";
    }
    else if(b>a && b>c){
        cout<<b<<" is the largest number";
    }
    else{
        cout<<c<<" is the largest number";
    }
    return 0;
}