#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include<dir.h>
#include<bits/stdc++.h>
using namespace std;

void SetColor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

int main()
{
    bool login_successfull=false;
    string account_name_save;
    string account_name;
    string account_name_login;
    string password_save;
    string password;
    string password_login;
    SetColor(11);
    cout<<"Create an user name: ";
    cin>>account_name;
    cout<<endl;
    cout<<"Create a password: ";
    cin>>password;
    cout<<endl;
    account_name_save=account_name;
    password_save=password;
    SetColor(10);
    cout<<"Your account has been saved!"<<endl;
    SetColor(9);
    cout<<"----------LOGIN-----------"<<endl;
    cout<<"Now, log in your account"<<endl;
    do
    {
        SetColor(11);
        cout<<endl<<"Type in your account name: ";
        cin>>account_name_login;
        cout<<endl<<"Type in your password: ";
        cin>>password_login;
        if(account_name_login==account_name_save&&password_login==password_save)
        {
            SetColor(2);
            cout<<endl<<"You have logged in successfully!";
            login_successfull=true;
        }
        else
        {
            SetColor(4);
            cout<<endl<<"Something is wrong!"<<endl<<endl<<"Please try again!"<<endl;
        }
    }
    while(!login_successfull);
    return 0;
}
//Programed By LML STUDIO
//Page: https://lml-studio.itch.io/
//You can use my code without credit but I'll appreciate if you do
/*Change logs:
  v1.0(05/03/2021): Project Finished
*/


