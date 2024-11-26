#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>
#include <unistd.h>

using namespace std;

void gotoxy(int x,int y);

int main() 
{
	int i;
	//1st
	for (i=2;i<=78;i++) {
		gotoxy(i,28);
		putchar('*');
		Sleep(25);
	}
	for (i=28;i>=2;i--) {
		gotoxy(78,i);
		putchar('*');
		Sleep(25);
	}
	for (i=78;i>=2;i--) {
		gotoxy(i,2);
		putchar('*');
		Sleep(25);
	}
	for (i=2;i<=26;i++) {
		gotoxy(2,i);
		putchar('*');
		Sleep(25);
	}
	//2nd
	for (i=2;i<=74;i++) {
		gotoxy(i,26);
		putchar('*');
		Sleep(25);
	}
	for (i=26;i>=4;i--) {
		gotoxy(74,i);
		putchar('*');
		Sleep(25);
	}
	for (i=74;i>=6;i--) {
		gotoxy(i,4);
		putchar('*');
		Sleep(25);
	}
	for (i=4;i<=24;i++) {
		gotoxy(6,i);
		putchar('*');
		Sleep(25);	
	}
	//3rd
	for (i=6;i<=70;i++) {
		gotoxy(i,24);
		putchar('*');
		Sleep(25);
	}
	for (i=24;i>=6;i--) {
		gotoxy(70,i);
		putchar('*');
		Sleep(25);
	}
	for (i=70;i>=10;i--) {
		gotoxy(i,6);
		putchar('*');
		Sleep(25);
	}
	for (i=6;i<=22;i++) {
		gotoxy(10,i);
		putchar('*');
		Sleep(25);	
	}
	//4th
	for (i=10;i<=66;i++) {
		gotoxy(i,22);
		putchar('*');
		Sleep(25);
	}
	for (i=22;i>=8;i--) {
		gotoxy(66,i);
		putchar('*');
		Sleep(25);
	}
	for (i=66;i>=14;i--) {
		gotoxy(i,8);
		putchar('*');
		Sleep(25);
	}
	for (i=8;i<=20;i++) {
		gotoxy(14,i);
		putchar('*');
		Sleep(25);	
	}
	//5th
	for (i=14;i<=62;i++) {
		gotoxy(i,20);
		putchar('*');
		Sleep(25);
	}
	for (i=20;i>=10;i--) {
		gotoxy(62,i);
		putchar('*');
		Sleep(25);
	}
	for (i=62;i>=18;i--) {
		gotoxy(i,10);
		putchar('*');
		Sleep(25);
	}
	for (i=10;i<=18;i++) {
		gotoxy(18,i);
		putchar('*');
		Sleep(25);	
	}
	//6th
	for (i=18;i<=58;i++) {
		gotoxy(i,18);
		putchar('*');
		Sleep(25);
	}
	for (i=18;i>=12;i--) {
		gotoxy(58,i);
		putchar('*');
		Sleep(25);
	}
	for (i=58;i>=22;i--) {
		gotoxy(i,12);
		putchar('*');
		Sleep(25);
	}
	for (i=12;i<=16;i++) {
		gotoxy(22,i);
		putchar('*');
		Sleep(25);	
	}
	//7th
	for (i=22;i<=54;i++) {
		gotoxy(i,16);
		putchar('*');
		Sleep(25);
	}
	for (i=16;i>=14;i--) {
		gotoxy(54,i);
		putchar('*');
		Sleep(25);
	}
	for (i=54;i>=26;i--) {
		gotoxy(i,14);
		putchar('*');
		Sleep(25);
	}
	
	
	getch();
	return 0;	
}

void gotoxy(int x,int y) 
{
	HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD row;
	row.X = x;
	row.Y = y;
	SetConsoleCursorPosition(col,row); 
}