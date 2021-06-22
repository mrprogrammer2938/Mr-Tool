// !/usr/bin/c++
// This code write by Mr.nope
#include <iostream>
#include <string>
using namespace std;
void cls()
{
    system("clear");
}
void menu()
{
    int choose;
    cls();
    cout<<" --[ Mr Tool ]--"<<endl;
    cout<<" --[ Version: 1.3.0 ]--"<<endl;
    cout<<"\n{1}.Brute Force"<<endl;
    cout<<"{2}.IPz"<<endl;
    cout<<"{3}.Black-Tool"<<endl;
    cout<<"{4}.DDos-Attack"<<endl;
    cout<<"{5}.Wirless-Attack"<<endl;
    cout<<"{6}.hacking tool"<<endl;
    cout<<"{7}.Key Master"<<endl;
    cout<<"{8}.Location Robber"<<endl;
    cout<<"{9}.Cloner X"<<endl;
    cout<<"{10}.Exit"<<endl;
    cin>>choose;
    if (choose == 1) {
        system("git clone https://github.com/mrprogrammer2938/Brute-Force");
        menu();
    } else if (choose == 2) {
        system("git clone https://github.com/mrprogrammer2938/IPz");
        menu();
    } else if (choose == 3) {
        system("git clone https://github.com/mrprogrammer2938/Black-Tool");
        menu();
    } else if (choose == 4) {
        system("git clone https://github.com/mrprogrammer2938/DDos-Attack");
        menu();
    } else if (choose == 5) {
        system("git clone https://github.com/mrprogrammer2938/Wirless-Attack");
        menu();
    } else if (choose == 6) {
        system("git clone https://github.com/mrprogrammer2938/hackingtools");
        menu();
    } else if (choose == 7) {
        system("git clone https://github.com/mrprogrammer2938/Key-Master");
        menu();
    } else if (choose == 8) {
        system("git clone https://github.com/mrprogrammer2938/Location-Robber");
        menu();
    } else if (choose == 9) {
        system("git clone https://github.com/mrprogrammer2938/Cloner-X");
        menu();
    } else if (choose == 10) {
        cls();
        cout<<"Exiting..."<<endl;
    } else {
        menu();
    }
    }

void try1()
{
    char try_to_menu;
    cout<<"\nDo you want to back main menu? [y/n] ";
    cin>>try_to_menu;
    if (try_to_menu == 'y') {
        menu();
    } else if (try_to_menu == 'n') {
        cls();
        cout<<"Exiting..."<<endl; 
    } else {
        menu();
    }
}
int main()
{
    menu();
    return 0;
}