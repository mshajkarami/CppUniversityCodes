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
    gotoxy(40,4);
    cout << "  //////////  " << endl ;
    gotoxy(40,5);
    cout << " |  0   0  |" << endl ;
    gotoxy(40,6);
	cout << "(|    ^    |)" << endl ;
    gotoxy(40,7);
	cout << " |         |" << endl ;
    gotoxy(40,8);
	cout << " |    _    |" << endl ;



    gotoxy(80,24);
    cin.get();


}
