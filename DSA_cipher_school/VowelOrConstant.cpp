// Check if the char is vowel or consonant -> take char as user input.

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character : "<<endl;
    cin>>ch;
    ch=ch+32;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"Entered character is a vowel";
    }
    else{
        cout<<"Entered character is a consonant";
    }
    return 0;
}