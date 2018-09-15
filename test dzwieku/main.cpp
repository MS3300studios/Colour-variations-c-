#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
   int szybkosc;
    cout<<"Choose the change colour speed ";
    cout<<"(the bigger the number the slower it gets): ";
    cin >> szybkosc;
    system("cls");

    while(true)
{

        for(int i=1;i<=szybkosc;i++)
    {
       system("color a0");
       cout<<"(;";
       system("cls");
    }
    for(int i=1;i<=szybkosc;i++)
    {
       system("color b0");
       cout <<"(;";
        system("cls");
    }
    for(int i=1;i<=szybkosc;i++)
    {
       system("color c0");
       cout <<"(;";
        system("cls");
    }
    for(int i=1;i<=szybkosc;i++)
    {
       system("color d0");
       cout <<"(;";
        system("cls");
    }
    for(int i=1;i<=szybkosc;i++)
    {
       system("color e0");
       cout <<"(;";
        system("cls");
    }
    for(int i=1;i<=szybkosc;i++)
    {
       system("color f0");
       cout <<"(;";
        system("cls");
    }
}
    return 0;
}
