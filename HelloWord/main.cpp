#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int age;
char genre;
string name;

int main()
{
    cout << "Hello World!" << endl;
    cout << "Are you a man or a woman? (m/w)" << endl;
    cin >> genre;

    if(genre=='m')
        cout << "Oh! you are a man, :( " << endl;
    else if(genre=='w')
        cout << "Oh! you are a woman, :D " << endl;
    else
         cout << "What are you? Well, doesn't matter XD" << endl;

    cout << "How old are you?" << endl;
    cin >> age;
    cout << "Your age is: " << age << ". It's ok! \n";
    cout << "What's your name? .\n";
    cin >> name;

    cout << "Nice conversation " << name <<endl;
    cout << "I have to go " << name <<"! .\n";

    if (genre=='m'){
        if (age>35){
            cout << "Bye old man" << endl;}
        if (age<35){
            cout << "Bye young man" << endl;}
        }

    if (genre=='w'){
        if (age>35){
            cout << "Bye old woman" << endl;}
        if (age<35){
            cout << "Bye pretty woman" << endl;}
    }

    return 0;
}

