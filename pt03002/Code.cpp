#include<iostream>
#include <unistd.h>

/*
we cant use this code in linux
#include <windows.h>
#include<conio.h>
ande function like gotoxy()
*/
using namespace std;

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
int main() {
    gotoxy(40,5);
    cout << "Mohamad Saleh"; // careker = 13
    cout.flush(); // in windows not needed

    sleep(5);
    gotoxy(40,4);
    cout << "--------------";
    gotoxy(39,5);
    cout << "|";
    gotoxy(54,5);
    cout << "|";
    gotoxy(40,6);
    cout << "--------------";

    gotoxy(80,24);
    cin.get();
////	cout << " |    _    |" << endl ;
}
