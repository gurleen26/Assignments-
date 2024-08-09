//  Define a Book class with a constructor to initialise its properties (title, author, year), and a method displayInfo.
#include<iostream>
#include<string.h>
using namespace std;

class Book{
    string title;
    string author;
    int year;
    public:
    Book(){
        cout<<"Enter title: ";
        cin>>title;
        cout<<"Enter author: ";
        cin>>author;
        cout<<"Enter year: ";
        cin>>year;
    }
    void displayInfo(){
        cout<<"\n===== DETAILS ====="<<endl;
        cout<<"TITLE : "<<title<<endl;
        cout<<"AUTHOR : "<<author<<endl;
        cout<<"YEAR : "<<year<<endl;
    }
};

int main(){
    Book obj;
    obj.displayInfo();
}