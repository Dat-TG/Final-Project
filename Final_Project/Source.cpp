#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#define max 50
#define DOWN -80
#define UP -72
#define LEFT -75
#define RIGHT -77
#define ENTER 13
#define ESC 27
#define BACKSPACE 8
#define SPACE 32

using namespace std;

void TextColor(int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);

}
void gotoXY(int x, int y)
{
	COORD co;
	co.X = x;
	co.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), co);
}

struct Date
{
	int ngay;
	int thang;
	int nam;
};

struct PhienGio
{
	char Thu[10]; // T2 ... T7
	char Gio[30]; // Ca 1...4
};

struct Diem
{
	double MidTerm;
	double Final;
	double Other; // Qua Trinh
	double Total;
	double GPA;
};
struct ListDiem
{
	Diem data;
	ListDiem* pNext;
};

struct SinhVien
{
	char ID;
	char FirstName[50];
	char LastName[50];
	char Gender[10];
	char DateOfBirth[50];
	char SocialID[10];
	ListDiem* pHead;
};
struct ListSV
{
	SinhVien info;
	ListSV* pNext;
};
struct MonHoc
{
	char ID;
	char Ten[40];
	char TenGV[50];
	char STC[5]; // so tin chi
	ListSV* pHead;
	Date Start;
	Date End;
	PhienGio p;
};
struct ListMonHoc
{
	int n; //so sinh vien
	MonHoc* pNext;
};
struct Lop
{
	char Ma[16];
	char Ten[30];
	char NienKhoa[10];
	ListSV* pHead;
};
struct ListLop
{
	Lop l;
	ListLop* pHead;
};

int GetKey()
{
	char key;
	key = _getch();
	if (key == -32 || key == 0)
		return -_getch();
	else return key;
}
char MENU_LOGIN[5][50] = { "1. Dang nhap - giao vien", "2. Dang nhap - hoc sinh", "3. Dang ky tai khoan - giao vien","4. Dang ky tai khoan - hoc sinh" , "4. Thoat" };
char MENU_GV[][100] = { "1. Tao nam hoc moi","2. Tao lop hoc moi", "3. Tao ki moi", "4. Tao khoa hoc moi", "5. Xuat danh sach khoa hoc", "6. Cap nhap thong tin khoa hoc" , "7. Xoa khoa hoc","8. Xuat bang diem danh sach khoa hoc", "9. Nhap diem" ,"10. Xuat bang diem theo danh sach lop"};
char MENU_SV[][35] = { "1. Dang ky khoa hoc","2. Xuat khoa hoc da dang ky","3. Xoa khoa hoc khoi danh sach","4. Xem bang diem" };

int main()
{
	
}
