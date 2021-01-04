#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;


string goodpassword = "123";

int main(void) {
	string idk;
	cout << " \n\n\n---> ";
	cin >> idk;

	if (idk == goodpassword) {
		cout << "good password";
		MessageBoxA(0, "good password", "good password", MB_OK);
		Sleep(1999);
		system("cls");
		main();
	}
	if (idk == "321") {
		cout << "bad password";
		//MessageBoxA(0, "bad password", "bad password", MB_OK);
		Sleep(1999);
		system("cls");
		main();
	}
	if (idk == "213") {
		cout << "bad password";
		//MessageBoxA(0, "bad password", "bad password", MB_OK);
		Sleep(1999);
		system("cls");
		main();
	}
	if (idk == "132") {
		cout << "bad password";
		//MessageBoxA(0, "bad password", "bad password", MB_OK);
		Sleep(1999);
		system("cls");
		main();
	}
	else {
		cout << "bad password";
		//MessageBoxA(0, "bad password", "bad password", MB_OK);
		Sleep(1999);
		system("cls");
		main();
	}

}