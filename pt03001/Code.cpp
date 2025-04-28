#include<iostream>

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
    gotoxy(40,12);
    cout << "Mohamad Saleh Hajkarami";
    gotoxy(40,13);
    cout << "7687236543" ;
    gotoxy(80,24);
    cin.get();
////	cout << " |    _    |" << endl ;
}
